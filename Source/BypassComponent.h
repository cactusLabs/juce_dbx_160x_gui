/*
  ==============================================================================

    BypassComponent.h
    Created: 27 Nov 2023 5:55:30pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class BypassComponent  : public juce::Component
{
public:
    BypassComponent();
    ~BypassComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::TextButton bypass { "bypass" };
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BypassComponent)
};
