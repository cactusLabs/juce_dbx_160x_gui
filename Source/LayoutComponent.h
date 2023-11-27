/*
  ==============================================================================

    LayoutComponent.h
    Created: 26 Nov 2023 6:25:03pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class LayoutComponent  : public juce::Component
{
public:
    LayoutComponent();
    ~LayoutComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    juce::Rectangle<int> area;
    juce::Rectangle<int> logo;
    juce::Rectangle<int> model;

    juce::Rectangle<int> bypass;
    juce::Rectangle<int> inOut;
    juce::Rectangle<int> outputGain;
    juce::Rectangle<int> overEasy;
    juce::Rectangle<int> ratio;
    juce::Rectangle<int> threshold;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LayoutComponent)
};
