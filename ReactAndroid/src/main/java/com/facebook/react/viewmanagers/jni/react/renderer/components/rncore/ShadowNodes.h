
/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by codegen project: GenerateShadowNodeH.js
 */

#pragma once

#include <react/renderer/components/rncore/EventEmitters.h>
#include <react/renderer/components/rncore/Props.h>
#include <react/renderer/components/view/ConcreteViewShadowNode.h>

namespace facebook {
namespace react {

extern const char ActivityIndicatorViewComponentName[];

/*
 * `ShadowNode` for <ActivityIndicatorView> component.
 */
using ActivityIndicatorViewShadowNode = ConcreteViewShadowNode<
    ActivityIndicatorViewComponentName,
    ActivityIndicatorViewProps>;

extern const char AndroidDrawerLayoutComponentName[];

/*
 * `ShadowNode` for <AndroidDrawerLayout> component.
 */
using AndroidDrawerLayoutShadowNode = ConcreteViewShadowNode<
    AndroidDrawerLayoutComponentName,
    AndroidDrawerLayoutProps,
AndroidDrawerLayoutEventEmitter>;

extern const char RCTMaskedViewComponentName[];

/*
 * `ShadowNode` for <RCTMaskedView> component.
 */
using RCTMaskedViewShadowNode = ConcreteViewShadowNode<
    RCTMaskedViewComponentName,
    RCTMaskedViewProps>;

extern const char RCTProgressViewComponentName[];

/*
 * `ShadowNode` for <RCTProgressView> component.
 */
using RCTProgressViewShadowNode = ConcreteViewShadowNode<
    RCTProgressViewComponentName,
    RCTProgressViewProps>;

extern const char AndroidSwipeRefreshLayoutComponentName[];

/*
 * `ShadowNode` for <AndroidSwipeRefreshLayout> component.
 */
using AndroidSwipeRefreshLayoutShadowNode = ConcreteViewShadowNode<
    AndroidSwipeRefreshLayoutComponentName,
    AndroidSwipeRefreshLayoutProps,
AndroidSwipeRefreshLayoutEventEmitter>;

extern const char PullToRefreshViewComponentName[];

/*
 * `ShadowNode` for <PullToRefreshView> component.
 */
using PullToRefreshViewShadowNode = ConcreteViewShadowNode<
    PullToRefreshViewComponentName,
    PullToRefreshViewProps,
PullToRefreshViewEventEmitter>;

extern const char RCTSegmentedControlComponentName[];

/*
 * `ShadowNode` for <RCTSegmentedControl> component.
 */
using RCTSegmentedControlShadowNode = ConcreteViewShadowNode<
    RCTSegmentedControlComponentName,
    RCTSegmentedControlProps,
RCTSegmentedControlEventEmitter>;

extern const char SwitchComponentName[];

/*
 * `ShadowNode` for <Switch> component.
 */
using SwitchShadowNode = ConcreteViewShadowNode<
    SwitchComponentName,
    SwitchProps,
SwitchEventEmitter>;

extern const char UnimplementedNativeViewComponentName[];

/*
 * `ShadowNode` for <UnimplementedNativeView> component.
 */
using UnimplementedNativeViewShadowNode = ConcreteViewShadowNode<
    UnimplementedNativeViewComponentName,
    UnimplementedNativeViewProps>;

} // namespace react
} // namespace facebook
