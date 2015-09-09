{
  'targets': [
    {
      'target_name': 'example4',
      'include_dirs': [
        '<!(node -e "require(\'nan\')")'
      ],
      'sources': [ 'example4.cpp' ]
    }
  ]
}
