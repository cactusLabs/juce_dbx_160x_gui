/*
  ==============================================================================

    ThresholdComponent.h
    Created: 27 Nov 2023 2:13:37pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

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

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ThresholdComponent)
};
