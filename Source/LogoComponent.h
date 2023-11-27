/*
  ==============================================================================

    LogoComponent.h
    Created: 26 Nov 2023 5:43:44pm
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class LogoComponent  : public juce::Component
{
public:
    LogoComponent();
    ~LogoComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LogoComponent)
};
