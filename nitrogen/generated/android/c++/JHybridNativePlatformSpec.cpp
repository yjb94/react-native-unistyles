///
/// JHybridNativePlatformSpec.cpp
/// Fri Sep 13 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "JHybridNativePlatformSpec.hpp"

// Forward declaration of `Insets` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Insets; }
// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class ColorScheme; }
// Forward declaration of `Dimensions` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Dimensions; }
// Forward declaration of `UnistylesNativeMiniRuntime` to properly resolve imports.
namespace margelo::nitro::unistyles { struct UnistylesNativeMiniRuntime; }
// Forward declaration of `UnistyleDependency` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class UnistyleDependency; }

#include "Insets.hpp"
#include "JInsets.hpp"
#include "ColorScheme.hpp"
#include "JColorScheme.hpp"
#include <string>
#include "Dimensions.hpp"
#include "JDimensions.hpp"
#include "UnistylesNativeMiniRuntime.hpp"
#include "JUnistylesNativeMiniRuntime.hpp"
#include <optional>
#include <functional>
#include <vector>
#include "UnistyleDependency.hpp"
#include "JFunc_void_std__vector_UnistyleDependency_.hpp"
#include "JUnistyleDependency.hpp"

namespace margelo::nitro::unistyles {

  jni::local_ref<JHybridNativePlatformSpec::jhybriddata> JHybridNativePlatformSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridNativePlatformSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridNativePlatformSpec::initHybrid),
    });
  }

  size_t JHybridNativePlatformSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  Insets JHybridNativePlatformSpec::getInsets() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JInsets>()>("getInsets");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  ColorScheme JHybridNativePlatformSpec::getColorScheme() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JColorScheme>()>("getColorScheme");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  double JHybridNativePlatformSpec::getFontScale() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("getFontScale");
    auto result = method(_javaPart);
    return result;
  }
  double JHybridNativePlatformSpec::getPixelRatio() {
    static const auto method = _javaPart->getClass()->getMethod<double()>("getPixelRatio");
    auto result = method(_javaPart);
    return result;
  }
  std::string JHybridNativePlatformSpec::getContentSizeCategory() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<jni::JString>()>("getContentSizeCategory");
    auto result = method(_javaPart);
    return result->toStdString();
  }
  Dimensions JHybridNativePlatformSpec::getScreenDimensions() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JDimensions>()>("getScreenDimensions");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  Dimensions JHybridNativePlatformSpec::getStatusBarDimensions() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JDimensions>()>("getStatusBarDimensions");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  Dimensions JHybridNativePlatformSpec::getNavigationBarDimensions() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JDimensions>()>("getNavigationBarDimensions");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  bool JHybridNativePlatformSpec::getPrefersRtlDirection() {
    static const auto method = _javaPart->getClass()->getMethod<bool()>("getPrefersRtlDirection");
    auto result = method(_javaPart);
    return result;
  }
  void JHybridNativePlatformSpec::setRootViewBackgroundColor(std::optional<double> color) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JDouble> /* color */)>("setRootViewBackgroundColor");
    method(_javaPart, color.has_value() ? jni::JDouble::valueOf(color.value()) : nullptr);
  }
  void JHybridNativePlatformSpec::setNavigationBarBackgroundColor(std::optional<double> color) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JDouble> /* color */)>("setNavigationBarBackgroundColor");
    method(_javaPart, color.has_value() ? jni::JDouble::valueOf(color.value()) : nullptr);
  }
  void JHybridNativePlatformSpec::setNavigationBarHidden(bool isHidden) {
    static const auto method = _javaPart->getClass()->getMethod<void(bool /* isHidden */)>("setNavigationBarHidden");
    method(_javaPart, isHidden);
  }
  void JHybridNativePlatformSpec::setStatusBarBackgroundColor(std::optional<double> color) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<jni::JDouble> /* color */)>("setStatusBarBackgroundColor");
    method(_javaPart, color.has_value() ? jni::JDouble::valueOf(color.value()) : nullptr);
  }
  void JHybridNativePlatformSpec::setImmersiveMode(bool isEnabled) {
    static const auto method = _javaPart->getClass()->getMethod<void(bool /* isEnabled */)>("setImmersiveMode");
    method(_javaPart, isEnabled);
  }
  UnistylesNativeMiniRuntime JHybridNativePlatformSpec::buildMiniRuntime() {
    static const auto method = _javaPart->getClass()->getMethod<jni::alias_ref<JUnistylesNativeMiniRuntime>()>("buildMiniRuntime");
    auto result = method(_javaPart);
    return result->toCpp();
  }
  void JHybridNativePlatformSpec::registerPlatformListener(const std::function<void(const std::vector<UnistyleDependency>& /* dependencies */)>& callback) {
    static const auto method = _javaPart->getClass()->getMethod<void(jni::alias_ref<JFunc_void_std__vector_UnistyleDependency_::javaobject> /* callback */)>("registerPlatformListener");
    method(_javaPart, JFunc_void_std__vector_UnistyleDependency_::fromCpp(callback));
  }

} // namespace margelo::nitro::unistyles
