#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 38 member(s).
class TextInputClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLeaveCompleted@TextInputClientAdapter@@UEAAJI@Z
    virtual long FocusLeaveCompleted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@TextInputClientAdapter@@UEAAJI@Z
    virtual long ForceRemoveFocus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageObject@TextInputClientAdapter@@QEAAJPEAPEAUIMessageObject@@@Z
    long GetMessageObject(IMessageObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformOasisDisplayMode@TextInputClientAdapter@@UEAAJW4OasisDisplayMode@@@Z
    virtual long InformOasisDisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputLanguage@TextInputClientAdapter@@UEAAJI@Z
    virtual long InitializeInputLanguage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputProfile@TextInputClientAdapter@@UEAAJUCoreInputProfile@@@Z
    virtual long InitializeInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHGI@Z
    virtual long InsertChar(tagMsgRoutingInfo, unsigned int, unsigned int, int, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHPEAUMsgString@@@Z
    virtual long InsertText(tagMsgRoutingInfo, unsigned int, unsigned int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyConnectRequested@TextInputClientAdapter@@UEAAJII@Z
    virtual long NotifyProxyConnectRequested(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyCreated@TextInputClientAdapter@@UEAAJII@Z
    virtual long NotifyProxyCreated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyDisposed@TextInputClientAdapter@@UEAAJII@Z
    virtual long NotifyProxyDisposed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@TextInputClientAdapter@@UEAAJII_NUKeyEventHostInfo@@@Z
    virtual long OnKeyEvent(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@TextInputClientAdapter@@UEAAJIW4TextInputAcknowledgment@@I@Z
    virtual long OperationCompleted(unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted2@TextInputClientAdapter@@UEAAJIW4TextInputAcknowledgment@@IUISLatencyTelemetry@@@Z
    virtual long OperationCompleted2(unsigned int, int, unsigned int, ISLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long ReplaceText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@HH@Z
    virtual long ReplaceTextEx(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgString@@HHH1@Z
    virtual long ReportError(tagMsgRoutingInfo, unsigned int, unsigned int, MsgString *, int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@TextInputClientAdapter@@UEAAJIW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@TextInputClientAdapter@@UEAAJUCoreInputProfile@@@Z
    virtual long RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputClientAdapter@@QEAAJPEAUIRemoteTextInputClient@@@Z
    long RuntimeClassInitialize(IRemoteTextInputClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@TextInputClientAdapter@@UEAAJIHHPEAUMsgBlob@@@Z
    virtual long SendCandidateList(unsigned int, int, int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessage@TextInputClientAdapter@@UEAAJPEAUMsgBlob@@@Z
    virtual long SendRawCandidateMessage(MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(tagMsgRoutingInfo, unsigned int, unsigned int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInfo@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long SetCompositionInfo(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@II_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(tagMsgRoutingInfo, unsigned int, unsigned int, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@III@Z
    virtual long SetInputLocale(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@TextInputClientAdapter@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@111W4RichContentType@@@Z
    virtual long SetSmartLink(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHUTextFormat@@@Z
    virtual long SetTextFormat(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, TextFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLayoutChangeTracking@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@II_NUEditControlRange@@@Z
    virtual long StartLayoutChangeTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionTracking@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@II_N1@Z
    virtual long StartPositionTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIHHI@Z
    virtual long TagText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputClientAdapter@@QEAA@XZ
    TextInputClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@TextInputClientAdapter@@UEAAJUtagMsgRoutingInfo@@IIIPEAUMsgString@@I@Z
    virtual long UnhandledKey(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int, MsgString *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputClientAdapter@@UEAA@XZ
    virtual ~TextInputClientAdapter();
};
