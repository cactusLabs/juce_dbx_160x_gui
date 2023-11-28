/*
  ==============================================================================

    OutputGainComponent.h
    Created: 27 Nov 2023 4:47:11pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class OutputGainLookAndFeel : public juce::LookAndFeel_V4 {
public:
    OutputGainLookAndFeel() {
        setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::green);
        setColour(juce::Slider::rotarySliderOutlineColourId, juce::Colours::white);
        setColour(juce::Slider::thumbColourId, juce::Colours::green);
    }
};
//==============================================================================
/*
*/
class OutputGainComponent  : public juce::Component
{
public:
    OutputGainComponent();
    ~OutputGainComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider outputGain;
    OutputGainLookAndFeel outputGainLookAndFeel;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OutputGainComponent)
};
