Pod::Spec.new do |spec|
  spec.name         = 'ANSegmentedControl'
  spec.version      = '0.0.1'
  spec.summary      = 'NSSegmentedControl subclass with animations.'
  spec.homepage     = 'https://github.com/decors/ANSegmentedControl'
  spec.author       = { 'Decors' => 'https://github.com/decors' }
  spec.documentation_url = 'https://github.com/decors/ANSegmentedControl'
  spec.source       = { :git => 'https://github.com/asidden/ANSegmentedControl.git', :commit => 'a4e76380b7984f6aa9af7e43d09941d637d487ef' }
  spec.osx.deployment_target = '10.6'
  spec.license      = { :type => 'BSD'}
  spec.requires_arc = false
  spec.source_files = ['Sample/Sample/ANSegmentedControl/*.{h,m}']
end