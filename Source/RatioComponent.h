/*
  ==============================================================================

    RatioComponent.h
    Created: 27 Nov 2023 3:00:00pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

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

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RatioComponent)
};
