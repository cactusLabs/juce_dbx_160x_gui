/*
  ==============================================================================

    RatioComponent.h
    Created: 27 Nov 2023 3:00:00pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class RatioLookAndFeel : public juce::LookAndFeel_V4 {
public:
    RatioLookAndFeel() {
        setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
        setColour(juce::Slider::rotarySliderOutlineColourId, juce::Colours::white);
        setColour(juce::Slider::thumbColourId, juce::Colours::blue);
    }
};
//==============================================================================
/*
*/
class RatioComponent  : public juce::Component
{
public:
    RatioComponent();
    ~RatioComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider ratio;
    RatioLookAndFeel ratioLookAndFeel;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RatioComponent)
};
