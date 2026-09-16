#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 31 member(s).
class CTextInputClientOwnerAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextInputClientOwnerAsync@@QEAA@XZ
    CTextInputClientOwnerAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLeaveCompleted@CTextInputClientOwnerAsync@@UEAAJXZ
    virtual long FocusLeaveCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLossAcknowledged@CTextInputClientOwnerAsync@@UEAAJXZ
    virtual long FocusLossAcknowledged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@CTextInputClientOwnerAsync@@UEAAJXZ
    virtual long ForceRemoveFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppName@CTextInputClientOwnerAsync@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetAppName(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlName@CTextInputClientOwnerAsync@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetControlName(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentEditControlInfo@CTextInputClientOwnerAsync@@UEAAJPEAUEditControlInfo@@@Z
    virtual long GetCurrentEditControlInfo(EditControlInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUILessMode@CTextInputClientOwnerAsync@@QEAAHXZ
    int GetIsUILessMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutBoundsAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCGetLayoutBoundsAsync@@@WRL@Microsoft@@UEditControlRange@@@Z
    WindissectOpaque GetLayoutBoundsAsync(EditControlRange);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCGetSelectionAsync@@@WRL@Microsoft@@_N@Z
    WindissectOpaque GetSelectionAsync(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasScheduler@CTextInputClientOwnerAsync@@QEBA_NXZ
    bool HasScheduler() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCharAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HG@Z
    WindissectOpaque InsertCharAsync(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTextAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HPEAUMsgString@@@Z
    WindissectOpaque InsertTextAsync(int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreventCloseCandidateUI@CTextInputClientOwnerAsync@@UEAAJ_N@Z
    virtual long PreventCloseCandidateUI(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryTextAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCQueryTextAsync@@@WRL@Microsoft@@HH@Z
    WindissectOpaque QueryTextAsync(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHPEAUMsgString@@@Z
    WindissectOpaque ReplaceTextAsync(int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChangeAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCRequestConversionModeChangeAsync@@@WRL@Microsoft@@IW4IMEConversionMode@@@Z
    WindissectOpaque RequestConversionModeChangeAsync(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessageAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@PEAUMsgBlob@@@Z
    WindissectOpaque SendRawCandidateMessageAsync(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReconvertCandidateList@CTextInputClientOwnerAsync@@UEAAJHHPEAUMsgBlob@@@Z
    virtual long SendReconvertCandidateList(int, int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClauseAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@PEAUMsgBlob@@@Z
    WindissectOpaque SetCompositionClauseAsync(MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInCompositionAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@_NPEAUMsgBlob@@@Z
    WindissectOpaque SetInCompositionAsync(bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@CTextInputClientOwnerAsync@@UEAAJI@Z
    virtual long SetInputLocale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHW4CaretBindDirection@@W4GripperVisibility@@@Z
    WindissectOpaque SetSelectionAsync(int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLinkAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHPEAUMsgString@@000W4RichContentType@@@Z
    WindissectOpaque SetSmartLinkAsync(int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormatAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHUTextFormat@@@Z
    WindissectOpaque SetTextFormatAsync(int, int, TextFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagTextAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHI@Z
    WindissectOpaque TagTextAsync(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKeyAsync@CTextInputClientOwnerAsync@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@IPEAUMsgString@@I@Z
    WindissectOpaque UnhandledKeyAsync(unsigned int, MsgString *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextInputClientOwnerAsync@@UEAA@XZ
    virtual ~CTextInputClientOwnerAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextInternal@CTextInputClientOwnerAsync@@AEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@HHPEAUMsgString@@_NHH@Z
    WindissectOpaque ReplaceTextInternal(int, int, MsgString *, bool, int, int);
};
