{
  'targets': [
    {
      'target_name': 'example2',
      'include_dirs': [
        '<!(node -e "require(\'nan\')")'
      ],
      'sources': [ 'example2.cpp' ]
    }
  ]
}
