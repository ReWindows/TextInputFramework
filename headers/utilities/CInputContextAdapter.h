#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 86 member(s).
class CInputContextAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyKeyEventPayload@CInputContextAdapter@@UEAAXXZ
    virtual void ApplyKeyEventPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@CInputContextAdapter@@UEAAXAEBUKeyEventHostInfo@@_N@Z
    virtual void BeginKeyEventPayload(KeyEventHostInfo const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputContextAdapter@@QEAA@XZ
    CInputContextAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelKeyEventPayload@CInputContextAdapter@@UEAAXXZ
    virtual void CancelKeyEventPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteEditSessionRequest@CInputContextAdapter@@UEAAJI@Z
    virtual long CompleteEditSessionRequest(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CInputContextAdapter@@SA_NPEAUIAdaptedInputContext@@PEAPEAUIDocumentContextSink@@@Z
    static bool CreateInstance(IAdaptedInputContext *, IDocumentContextSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoEditSession@CInputContextAdapter@@UEAAJK@Z
    virtual long DoEditSession(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@CInputContextAdapter@@UEAA_N_N@Z
    virtual bool EndKeyEventPayload(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLossAcknowledged@CInputContextAdapter@@UEAAJXZ
    virtual long FocusLossAcknowledged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@CInputContextAdapter@@UEAAJXZ
    virtual long ForceRemoveFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppName@CInputContextAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetAppName(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretPosition@CInputContextAdapter@@UEAAJPEAH@Z
    virtual long GetCaretPosition(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionContext@CInputContextAdapter@@UEAAPEAUIAdaptedInputContext@@XZ
    virtual IAdaptedInputContext * GetCompositionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlName@CInputContextAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetControlName(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentEditControlInfo@CInputContextAdapter@@UEAAJPEAUEditControlInfo@@@Z
    virtual long GetCurrentEditControlInfo(EditControlInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUILessMode@CInputContextAdapter@@UEAAHXZ
    virtual int GetIsUILessMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutBounds@CInputContextAdapter@@UEAAJUEditControlRange@@PEAUTextRect@@1@Z
    virtual long GetLayoutBounds(EditControlRange, TextRect *, TextRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutBounds@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@PEAUTextRect@@1@Z
    virtual long GetLayoutBounds(unsigned int, EditControlRange const &, TextRect *, TextRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutInfo@CInputContextAdapter@@UEAA?AUTextboxLayoutInfo@core@tsf4@@XZ
    virtual WindissectOpaque GetLayoutInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CInputContextAdapter@@UEAAJIPEAUEditControlRange@@@Z
    virtual long GetSelection(unsigned int, EditControlRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CInputContextAdapter@@UEAAJPEAUEditControlRange@@@Z
    virtual long GetSelection(EditControlRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CInputContextAdapter@@UEAA?AUEditControlRange@@XZ
    virtual EditControlRange GetSelection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@PEAPEAUMsgString@@@Z
    virtual long GetText(unsigned int, EditControlRange const &, MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CInputContextAdapter@@UEAAPEAUMsgString@@AEBUEditControlRange@@@Z
    virtual MsgString * GetText(EditControlRange const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentation@CInputContextAdapter@@UEAAJJPEAPEAUITfTextRangeAugmentation@@@Z
    virtual long GetTextAugmentation(long, ITfTextRangeAugmentation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentations@CInputContextAdapter@@UEAAJJJPEAPEAUIEnumTfTextRangeAugmentation@@@Z
    virtual long GetTextAugmentations(long, long, IEnumTfTextRangeAugmentation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLength@CInputContextAdapter@@UEAAHXZ
    virtual int GetTextLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyEventPayload@CInputContextAdapter@@UEAA_NXZ
    virtual bool HasKeyEventPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@CInputContextAdapter@@UEAAJHG@Z
    virtual long InsertChar(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@CInputContextAdapter@@UEAAJHPEAUMsgString@@@Z
    virtual long InsertText(int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBusyChange@CInputContextAdapter@@UEAAX_N@Z
    virtual void OnBusyChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateMessage@CInputContextAdapter@@UEAAJIPEAUMsgBlob@@@Z
    virtual long OnCandidateMessage(unsigned int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateMessage@CInputContextAdapter@@UEAAJPEAUMsgBlob@@@Z
    virtual long OnCandidateMessage(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseCandidateUI@CInputContextAdapter@@UEAAXXZ
    virtual void OnCloseCandidateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTerminated@CInputContextAdapter@@UEAAJKPEAUITfComposition@@@Z
    virtual long OnCompositionTerminated(unsigned long, ITfComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CInputContextAdapter@@UEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CInputContextAdapter@@UEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditSessionEnded@CInputContextAdapter@@UEAAXKPEAUITfEditRecord@@_N@Z
    virtual void OnEditSessionEnded(unsigned long, ITfEditRecord *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CInputContextAdapter@@UEAAX_NPEAUIAdaptedInputContext@@@Z
    virtual void OnFocusChange(bool, IAdaptedInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReconvertRequest@CInputContextAdapter@@UEAAX_N0@Z
    virtual void OnReconvertRequest(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetCompositionClause@CInputContextAdapter@@UEAAJIPEAUMsgBlob@@@Z
    virtual long OnSetCompositionClause(unsigned int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusChange@CInputContextAdapter@@UEAAXXZ
    virtual void OnStatusChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationAdded@CInputContextAdapter@@UEAAJUTextRangeAugmentation@@@Z
    virtual long OnTextAugmentationAdded(TextRangeAugmentation);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationChanged@CInputContextAdapter@@UEAAJIAEBUTextRangeAugmentation@@@Z
    virtual long OnTextAugmentationChanged(unsigned int, TextRangeAugmentation const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationsRemoved@CInputContextAdapter@@UEAAJUEditControlRange@@@Z
    virtual long OnTextAugmentationsRemoved(EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChange@CInputContextAdapter@@UEAAXAEBUTS_TEXTCHANGE@@@Z
    virtual void OnTextChange(TS_TEXTCHANGE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnregistered@CInputContextAdapter@@UEAAXXZ
    virtual void OnUnregistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreventCloseCandidateUI@CInputContextAdapter@@UEAAJ_N@Z
    virtual long PreventCloseCandidateUI(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryText@CInputContextAdapter@@UEAAJHHPEAPEAUMsgString@@@Z
    virtual long QueryText(int, int, MsgString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@CInputContextAdapter@@UEAAJHHPEAUMsgString@@@Z
    virtual long ReplaceText(int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@IPEBG@Z
    virtual long ReplaceText(unsigned int, EditControlRange const &, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextNoSelectionChange@CInputContextAdapter@@UEAAJUEditControlRange@@PEAUMsgString@@@Z
    virtual long ReplaceTextNoSelectionChange(EditControlRange, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@CInputContextAdapter@@UEAAJIW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@CInputContextAdapter@@UEAAJI@Z
    virtual long RequestConversionModeChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEditSession@CInputContextAdapter@@UEAAJ_N0@Z
    virtual long RequestEditSession(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInputContextAdapter@@QEAAJPEAUIAdaptedInputContext@@PEAUITextInputClient@@@Z
    long RuntimeClassInitialize(IAdaptedInputContext *, ITextInputClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReconvertCandidateList@CInputContextAdapter@@UEAAJHHPEAUMsgBlob@@@Z
    virtual long SendReconvertCandidateList(int, int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@CInputContextAdapter@@UEAAJPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@CInputContextAdapter@@UEAAJI_N0PEAUMsgBlob@@@Z
    virtual long SetInComposition(unsigned int, bool, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@CInputContextAdapter@@UEAAJ_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@CInputContextAdapter@@UEAAJI@Z
    virtual long SetInputLocale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CInputContextAdapter@@UEAAJHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@W4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(unsigned int, EditControlRange const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@IPEBG@Z
    virtual long SetText(unsigned int, EditControlRange const &, unsigned int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@CInputContextAdapter@@UEAAJHHUTextFormat@@@Z
    virtual long SetTextFormat(int, int, TextFormat);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@CInputContextAdapter@@UEAAJIAEBUEditControlRange@@PEAIPEAUTextFormat@@@Z
    virtual long SetTextFormat(unsigned int, EditControlRange const &, unsigned int *, TextFormat *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@CInputContextAdapter@@UEAAJHHI@Z
    virtual long TagText(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@CInputContextAdapter@@UEAAJIPEAUMsgString@@I@Z
    virtual long UnhandledKey(unsigned int, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUILessMode@CInputContextAdapter@@UEAAX_N@Z
    virtual void UpdateUILessMode(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputContextAdapter@@UEAA@XZ
    virtual ~CInputContextAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustLayoutBoundsForNonClientArea@CInputContextAdapter@@AEAAXPEAUHWND__@@PEAUtagRECT@@1@Z
    void _AdjustLayoutBoundsForNonClientArea(HWND__*, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DequeueOperation@CInputContextAdapter@@AEAAXPEAVCTSF3Operation@@@Z
    void _DequeueOperation(CTSF3Operation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnqueueOperation@CInputContextAdapter@@AEAAXPEAVCTSF3Operation@@@Z
    void _EnqueueOperation(CTSF3Operation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteOperation@CInputContextAdapter@@AEAAJPEAVCTSF3Operation@@_N@Z
    long _ExecuteOperation(CTSF3Operation *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentSelection@CInputContextAdapter@@AEAAJKPEAUEditControlRange@@@Z
    long _GetCurrentSelection(unsigned long, EditControlRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNextOperation@CInputContextAdapter@@AEAA_NPEAPEAVCTSF3Operation@@@Z
    bool _GetNextOperation(CTSF3Operation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCompositionEnded@CInputContextAdapter@@AEAAXXZ
    void _OnCompositionEnded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Register@CInputContextAdapter@@AEAAJXZ
    long _Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestEditSession@CInputContextAdapter@@AEAAXK@Z
    void _RequestEditSession(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExpectedTextChange@CInputContextAdapter@@AEAAXAEBUEditControlRange@@I@Z
    void _SetExpectedTextChange(EditControlRange const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldRetainCompositionOnFocusChange@CInputContextAdapter@@AEBA_NXZ
    bool _ShouldRetainCompositionOnFocusChange() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputScope@CInputContextAdapter@@AEAA_NXZ
    bool _UpdateInputScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputSettings@CInputContextAdapter@@AEAA_NXZ
    bool _UpdateInputSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSelection@CInputContextAdapter@@AEAAXXZ
    void _UpdateSelection();
};
