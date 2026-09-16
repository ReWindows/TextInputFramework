#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 34 member(s).
class VirtTextInputClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLeaveCompleted@VirtTextInputClient@@UEAAJI@Z
    virtual long FocusLeaveCompleted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@VirtTextInputClient@@UEAAJI@Z
    virtual long ForceRemoveFocus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformOasisDisplayMode@VirtTextInputClient@@UEAAJW4OasisDisplayMode@@@Z
    virtual long InformOasisDisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputLanguage@VirtTextInputClient@@UEAAJI@Z
    virtual long InitializeInputLanguage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputProfile@VirtTextInputClient@@UEAAJUCoreInputProfile@@@Z
    virtual long InitializeInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHGI@Z
    virtual long InsertChar(tagMsgRoutingInfo, unsigned int, unsigned int, int, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHPEAUMsgString@@@Z
    virtual long InsertText(tagMsgRoutingInfo, unsigned int, unsigned int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@VirtTextInputClient@@UEAAJII_NUKeyEventHostInfo@@@Z
    virtual long OnKeyEvent(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@VirtTextInputClient@@UEAAJIW4TextInputAcknowledgment@@I@Z
    virtual long OperationCompleted(unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted2@VirtTextInputClient@@UEAAJIW4TextInputAcknowledgment@@IUISLatencyTelemetry@@@Z
    virtual long OperationCompleted2(unsigned int, int, unsigned int, ISLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long ReplaceText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@HH@Z
    virtual long ReplaceTextEx(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgString@@HHH1@Z
    virtual long ReportError(tagMsgRoutingInfo, unsigned int, unsigned int, MsgString *, int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@VirtTextInputClient@@UEAAJIW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@VirtTextInputClient@@UEAAJUCoreInputProfile@@@Z
    virtual long RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@VirtTextInputClient@@UEAAJIHHPEAUMsgBlob@@@Z
    virtual long SendCandidateList(unsigned int, int, int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessage@VirtTextInputClient@@UEAAJPEAUMsgBlob@@@Z
    virtual long SendRawCandidateMessage(MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(tagMsgRoutingInfo, unsigned int, unsigned int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInfo@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long SetCompositionInfo(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@II_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(tagMsgRoutingInfo, unsigned int, unsigned int, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@III@Z
    virtual long SetInputLocale(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@VirtTextInputClient@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@111W4RichContentType@@@Z
    virtual long SetSmartLink(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHUTextFormat@@@Z
    virtual long SetTextFormat(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, TextFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLayoutChangeTracking@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@II_NUEditControlRange@@@Z
    virtual long StartLayoutChangeTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionTracking@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@II_N1@Z
    virtual long StartPositionTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHI@Z
    virtual long TagText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@VirtTextInputClient@@UEAAJUtagMsgRoutingInfo@@IIIPEAUMsgString@@I@Z
    virtual long UnhandledKey(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterProxy@VirtTextInputClient@@QEAAXUMessageObjectID@@@Z
    void UnregisterProxy(MessageObjectID);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtTextInputClient@@QEAA@XZ
    VirtTextInputClient();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtTextInputClient@@UEAA@XZ
    virtual ~VirtTextInputClient();
};
