#pragma once

#include <JuceHeader.h>
#include "BypassComponent.h"
#include "InOutComponent.h"
#include "ModelComponent.h"
#include "LayoutComponent.h"
#include "LogoComponent.h"
#include "OverEasyComponent.h"
#include "OutputGainComponent.h"
#include "ThresholdComponent.h"
#include "RatioComponent.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
    
    //==============================================================================
    ModelComponent model;
    LayoutComponent layout;
    LogoComponent logo;
    BypassComponent bypass;
    InOutComponent inOut;
    OutputGainComponent outputGain;
    OverEasyComponent overEasy;
    RatioComponent ratio;
    ThresholdComponent threshold;
};
