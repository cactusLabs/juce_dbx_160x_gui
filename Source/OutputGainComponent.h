/*
  ==============================================================================

    OutputGainComponent.h
    Created: 27 Nov 2023 4:47:11pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

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
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OutputGainComponent)
};
