project('fichiercrypte', ['cpp', 'c'],
          version: '0.1.0',
    meson_version: '>= 0.59.0',
  default_options: [ 'warning_level=2',
                     'cpp_std=gnu++2a',
                   ],
)

FileRc4_sources = [
  'main.cpp',
]

incdir = include_directories('include', 'src')

subdir('include')
subdir('src')

executable('fichiercrypte', FileRc4_sources,
  include_directories : incdir,
  install: true,
)
