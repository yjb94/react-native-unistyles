///
/// HybridUnistylesNavigationBarSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridUnistylesNavigationBarSpec.hpp"

namespace margelo::nitro::unistyles {

  void HybridUnistylesNavigationBarSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("width", &HybridUnistylesNavigationBarSpec::getWidth);
      prototype.registerHybridGetter("height", &HybridUnistylesNavigationBarSpec::getHeight);
      prototype.registerHybridMethod("setBackgroundColor", &HybridUnistylesNavigationBarSpec::setBackgroundColor);
      prototype.registerHybridMethod("setHidden", &HybridUnistylesNavigationBarSpec::setHidden);
    });
  }

} // namespace margelo::nitro::unistyles
