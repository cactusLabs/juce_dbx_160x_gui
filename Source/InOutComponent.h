/*
  ==============================================================================

    InOutComponent.h
    Created: 27 Nov 2023 6:17:01pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class InOutComponent  : public juce::Component
{
public:
    InOutComponent();
    ~InOutComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::TextButton inOut{ "in out" };
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InOutComponent)
};
