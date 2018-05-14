Pod::Spec.new do |s|
s.name = 'APPConfigFramework'
s.version = '1.0.0'
s.license = 'MIT'
s.summary = 'it is a project profile in iOS.'
s.homepage = 'https://github.com/feitiandalong/APPConfigFramework'
s.authors = { 'feitiandalong' => 'cangsangzhinian@qq.com' }
s.source = { :git => "https://github.com/feitiandalong/APPConfigFramework.git", :tag => "1.0.0"}
s.requires_arc = true
s.ios.deployment_target = '8.0'

#需要包含的源文件
s.source_files = 'TestFramework.framework/Headers/*.{h}'

#你的SDK路径
s.vendored_frameworks = 'TestFramework.framework'

#SDK头文件路径
s.public_header_files = 'TestFramework.framework/Headers/TestFramework.h'

#依赖库
s.frameworks   = 'UIKit','Foundation','CoreLocation'


end