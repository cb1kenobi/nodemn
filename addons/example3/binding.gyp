{
  'targets': [
    {
      'target_name': 'example3',
      'include_dirs': [
        '<!(node -e "require(\'nan\')")'
      ],
      'sources': [ 'example3.cpp' ]
    }
  ]
}
