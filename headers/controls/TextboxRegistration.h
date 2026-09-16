#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 35 member(s).
class TextboxRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditActionReceived@TextboxRegistration@@UEAAXPEAV?$TEditAction@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@@Z
    virtual void EditActionReceived(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditSessionRequestGranted@TextboxRegistration@@QEAAXXZ
    void EditSessionRequestGranted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@TextboxRegistration@@QEAAX_NI@Z
    void FocusChanged(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutQueryCompleted@TextboxRegistration@@QEAAXAEBUEditControlRange@@AEBUTextboxLayoutInfo@core@tsf4@@@Z
    void LayoutQueryCompleted(EditControlRange const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTerminated@TextboxRegistration@@QEAA_NXZ
    bool OnCompositionTerminated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@TextboxRegistration@@QEAA_NAEBUEditControlRange@@@Z
    bool OnSelectionChanged(EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskScheduleEmpty@TextboxRegistration@@QEAAXXZ
    void OnTaskScheduleEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChanged@TextboxRegistration@@QEAAXAEBUEditControlRange@@HPEAUMsgString@@0@Z
    void OnTextChanged(EditControlRange const &, int, MsgString *, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDisconnected@TextboxRegistration@@QEAAXG@Z
    void ProviderDisconnected(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TextboxRegistration@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@TextboxRegistration@@QEAAXIAEBUEditControlRange@@@Z
    void SelectionChanged(unsigned int, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionQueryCompleted@TextboxRegistration@@QEAAXAEBUEditControlRange@@@Z
    void SelectionQueryCompleted(EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChanged@TextboxRegistration@@QEAAXXZ
    void SettingsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@TextboxRegistration@@QEAAXAEBUEditOperationInfo@@H@Z
    void TextChanged(EditOperationInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@TextboxRegistration@@QEAAXIAEBUEditControlRange@@H0@Z
    void TextChanged(unsigned int, EditControlRange const &, int, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPopulated@TextboxRegistration@@QEAAXHPEAUMsgString@@@Z
    void TextPopulated(int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextQueryCompleted@TextboxRegistration@@QEAAXAEBUEditControlRange@@PEAUMsgString@@@Z
    void TextQueryCompleted(EditControlRange const &, MsgString *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextboxRegistration@@QEAA@PEAVTextInputClient@@PEAVClientOwnerRegistration@@PEAVTextboxProxy@@@Z
    TextboxRegistration(TextInputClient *, ClientOwnerRegistration *, TextboxProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetCompositionInfo@TextboxRegistration@@QEAAXXZ
    void _ResetCompositionInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextboxRegistration@@UEAA@XZ
    virtual ~TextboxRegistration();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@TextboxRegistration@@EEBA?AW4TextStoreJunctionType@@XZ
    virtual int Type() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyEditAction@TextboxRegistration@@EEAAXPEAV?$TEditAction@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@@Z
    virtual void _ApplyEditAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BundleHasPendingTextChange@TextboxRegistration@@AEBA_NXZ
    bool _BundleHasPendingTextChange() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanSubmitActions@TextboxRegistration@@EEBA_NXZ
    virtual bool _CanSubmitActions() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAppBundle@TextboxRegistration@@AEAAXXZ
    void _CompleteAppBundle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeAnchorGap@TextboxRegistration@@AEBA?AUEditControlRange@@AEBU2@@Z
    EditControlRange _ComputeAnchorGap(EditControlRange const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeAnchorWindow@TextboxRegistration@@AEBA?AUEditControlRange@@HAEBU2@H_N@Z
    EditControlRange _ComputeAnchorWindow(int, EditControlRange const &, int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefaultActionSubmit@TextboxRegistration@@EEAAJPEAV?$TEditAction@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@@Z
    virtual long _DefaultActionSubmit(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAnchorComfortablyPopulated@TextboxRegistration@@AEBA_NAEBVPopulatedText@@HH_N@Z
    bool _IsAnchorComfortablyPopulated(PopulatedText const &, int, int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyActionApplied@TextboxRegistration@@EEAAXPEAV?$TEditAction@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@@Z
    virtual void _NotifyActionApplied(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyPayloadCompleted@TextboxRegistration@@EEAAXAEBUEditActionHeader@@W4EditActionState@@@Z
    virtual void _NotifyPayloadCompleted(EditActionHeader const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubmitNextPayload@TextboxRegistration@@AEAAXPEAV?$TActionQueue@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@@Z
    void _SubmitNextPayload(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTextStore@TextboxRegistration@@EEAAXUEditControlRange@@IPEBG@Z
    virtual void _UpdateTextStore(EditControlRange, unsigned int, unsigned short const *);
};
