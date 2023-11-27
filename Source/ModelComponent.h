/*
  ==============================================================================

    ModelComponent.h
    Created: 27 Nov 2023 11:24:47am
    Author:  Ruggles

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class ModelComponent  : public juce::Component
{
public:
    ModelComponent();
    ~ModelComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ModelComponent)
};
