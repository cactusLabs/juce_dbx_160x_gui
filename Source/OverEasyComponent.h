/*
  ==============================================================================

    OverEasyComponent.h
    Created: 27 Nov 2023 5:13:47pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class OverEasyComponent  : public juce::Component
{
public:
    OverEasyComponent();
    ~OverEasyComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::TextButton overEasy { "over easy"};
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OverEasyComponent)
};
