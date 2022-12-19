project(
  'source-explorer',
  ['c', 'cpp'],
  default_options: [
    # 'warning_level=3',
    # 'werror=true',
    'b_vscrt=static_from_buildtype',
    # 'b_sanitize=undefined',
  ],
)

lak_subprj = subproject('lak')
c_args = lak_subprj.get_variable('c_args')
cpp_args = lak_subprj.get_variable('cpp_args')
c_cpp_args = lak_subprj.get_variable('c_cpp_args')
version = lak_subprj.get_variable('version')

add_project_arguments(c_cpp_args + cpp_args, language: ['cpp'])
add_project_arguments(c_cpp_args + c_args, language: ['c'])

# :TODO: replace this with meson git stuff
if host_machine.system() == 'windows'
  git_header = custom_target(
    'generate_git_file',
    output: 'git.hpp',
    command: ['generate_git_file.bat', '@OUTPUT@'] ,
    build_by_default: true,
  )
else
  git_header = custom_target(
    'generate_git_file',
    output: 'git.hpp',
    command: ['./generate_git_file.sh', '@OUTPUT@'] ,
    build_by_default: true,
  )
endif

install_directory = host_machine.cpu_family()

subdir('src')

lak_subprj = subproject('lak')

executable(
  'srcexp',
  ['src/main.cpp', git_header],
  install: true,
  install_dir: install_directory,
  override_options: [
    'cpp_std=' + version,
    'warning_level=3',
    'werror=true',
  ],
  dependencies: [
    srcexp_dep,
  ],
  link_args: [
    lak_subprj.get_variable('system_libraries'),
  ],
)
