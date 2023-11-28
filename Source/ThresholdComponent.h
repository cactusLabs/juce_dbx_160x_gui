/*
  ==============================================================================

    ThresholdComponent.h
    Created: 27 Nov 2023 2:13:37pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class ThresholdLookAndFeel : public juce::LookAndFeel_V4 {
public:
    ThresholdLookAndFeel() {
        setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);
        setColour(juce::Slider::rotarySliderOutlineColourId, juce::Colours::white);
        setColour(juce::Slider::thumbColourId, juce::Colours::red);
    }
};
//==============================================================================
/*
*/
class ThresholdComponent  : public juce::Component
{
public:
    ThresholdComponent();
    ~ThresholdComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider threshold;
    ThresholdLookAndFeel thresholdLookAndFeel;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ThresholdComponent)
};
