require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name         = "react-native-kashier"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.description  = <<-DESC
                  react-native-kashier
                   DESC
  s.homepage     = "https://github.com/Kashier-payments/react-native-kashier"
  # brief license entry:
  s.license      = "MIT"
  # optional - use expanded license entry instead:
  # s.license    = { :type => "MIT", :file => "LICENSE" }
  s.authors      = { "Kashier" => "support@kashier.io" }
  s.platforms    = { :ios => "9.0" }
  s.source       = { :git => "https://github.com/Kashier-payments/react-native-kashier.git", :tag => "#{s.version}" }

  s.source_files = "ios/**/*.{h,c,m,swift}"
  s.requires_arc = true

  s.dependency "React"
#   s.vendored_frameworks = 'ios/KashierPaymentSDK.framework'
  s.vendored_frameworks = 'ios/KashierPaymentSDK.xcframework'
  # ...
  # s.dependency "..."
end

