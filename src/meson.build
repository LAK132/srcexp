lisk_dep = subproject('lisk').get_variable('lisk_dep')
lak_dep = subproject('lak').get_variable('lak_dep')

srcexp = static_library(
	'libsrcexp',
	[
		'explorer.cpp',
	],
	override_options: [
		'cpp_std=' + version,
		'warning_level=3',
	],
	include_directories: include_directories('../include'),
	dependencies: [
		dependency('threads'),
		lisk_dep,
		lak_dep,
	],
)

srcexp_dep = declare_dependency(
	link_with: srcexp,
	include_directories: include_directories('../include'),
	dependencies: [
		lisk_dep,
		lak_dep,
	],
)
