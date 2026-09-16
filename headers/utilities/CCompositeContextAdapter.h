#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 51 member(s).
class CCompositeContextAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositeContextAdapter@@QEAA@XZ
    CCompositeContextAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComposition@CCompositeContextAdapter@@UEAAJKPEAUITfCompositionSink@@PEAPEAUITfComposition@@@Z
    virtual long CreateComposition(unsigned long, ITfCompositionSink *, ITfComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CCompositeContextAdapter@@SA_NPEAUIAdaptedInputContext@@PEAPEAUIDocumentContextSink@@@Z
    static bool CreateInstance(IAdaptedInputContext *, IDocumentContextSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRange@CCompositeContextAdapter@@UEAAJJJPEAPEAUITfRangeACP@@@Z
    virtual long CreateRange(long, long, ITfRangeACP * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoEditSession@CCompositeContextAdapter@@UEAAJK@Z
    virtual long DoEditSession(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@CCompositeContextAdapter@@UEAAJKPEAUITfComposition@@@Z
    virtual long EndComposition(unsigned long, ITfComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeCurrentComposition@CCompositeContextAdapter@@UEAAXXZ
    virtual void FinalizeCurrentComposition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveView@CCompositeContextAdapter@@UEAAJPEAPEAUITfContextView@@@Z
    virtual long GetActiveView(ITfContextView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPropertyValue@CCompositeContextAdapter@@UEAA_NAEBU_GUID@@PEAUtagVARIANT@@@Z
    virtual bool GetAppPropertyValue(_GUID const &, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryManager@CCompositeContextAdapter@@UEAAPEAUITfCategoryMgr@@XZ
    virtual ITfCategoryMgr * GetCategoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionContext@CCompositeContextAdapter@@UEAAPEAUIAdaptedInputContext@@XZ
    virtual IAdaptedInputContext * GetCompositionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScopeValue@CCompositeContextAdapter@@UEAA?AW4__MIDL___MIDL_itf_inputscope_0000_0000_0001@@PEA_N@Z
    virtual int GetInputScopeValue(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CCompositeContextAdapter@@UEAAJAEBU_GUID@@PEAPEAUITfProperty@@@Z
    virtual long GetProperty(_GUID const &, ITfProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CCompositeContextAdapter@@UEAAJKPEAUEditControlRange@@@Z
    virtual long GetSelection(unsigned long, EditControlRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusChangedFlags@CCompositeContextAdapter@@UEBAKXZ
    virtual unsigned long GetStatusChangedFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLength@CCompositeContextAdapter@@UEAAHXZ
    virtual int GetTextLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadInputManager@CCompositeContextAdapter@@UEAAPEAUIThreadInputManagerPrivate@@XZ
    virtual IThreadInputManagerPrivate * GetThreadInputManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InWriteSession@CCompositeContextAdapter@@UEAAJKPEAH@Z
    virtual long InWriteSession(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositeContext@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsCompositeContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmContext@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsImmContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManualInputPaneEnabled@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsManualInputPaneEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiline@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsMultiline();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsReadOnly();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReconversionMode@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsReconversionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerticalWriting@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsVerticalWriting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWritingSuggestionsDisabled@CCompositeContextAdapter@@UEAA_NXZ
    virtual bool IsWritingSuggestionsDisabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBusyChange@CCompositeContextAdapter@@UEAAX_N@Z
    virtual void OnBusyChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseCandidateUI@CCompositeContextAdapter@@UEAAXXZ
    virtual void OnCloseCandidateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTerminated@CCompositeContextAdapter@@UEAAJKPEAUITfComposition@@@Z
    virtual long OnCompositionTerminated(unsigned long, ITfComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTextChange@CCompositeContextAdapter@@UEAAXAEBUTS_TEXTCHANGE@@@Z
    virtual void OnCompositionTextChange(TS_TEXTCHANGE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionUpdated@CCompositeContextAdapter@@UEAAXKPEAUITfEditRecord@@_N@Z
    virtual void OnCompositionUpdated(unsigned long, ITfEditRecord *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetached@CCompositeContextAdapter@@UEAAXXZ
    virtual void OnDetached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditSessionEnded@CCompositeContextAdapter@@UEAAXKPEAUITfEditRecord@@_N@Z
    virtual void OnEditSessionEnded(unsigned long, ITfEditRecord *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CCompositeContextAdapter@@UEAAX_NPEAUIAdaptedInputContext@@@Z
    virtual void OnFocusChange(bool, IAdaptedInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReconvertRequest@CCompositeContextAdapter@@UEAAX_N0@Z
    virtual void OnReconvertRequest(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusChange@CCompositeContextAdapter@@UEAAXXZ
    virtual void OnStatusChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChange@CCompositeContextAdapter@@UEAAXAEBUTS_TEXTCHANGE@@@Z
    virtual void OnTextChange(TS_TEXTCHANGE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnregistered@CCompositeContextAdapter@@UEAAXXZ
    virtual void OnUnregistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEditSession@CCompositeContextAdapter@@UEAAJKPEAUITfEditSession@@KPEAJ@Z
    virtual long RequestEditSession(unsigned long, ITfEditSession *, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionContextSink@CCompositeContextAdapter@@UEAAXPEAUICompositionContextSink@@@Z
    virtual void SetCompositionContextSink(ICompositionContextSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterimSelection@CCompositeContextAdapter@@UEAAJKUEditControlRange@@@Z
    virtual long SetInterimSelection(unsigned long, EditControlRange);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReconversionCandidateList@CCompositeContextAdapter@@UEAAJHHPEBEI@Z
    virtual long SetReconversionCandidateList(int, int, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CCompositeContextAdapter@@UEAAJKUEditControlRange@@W4CaretBindDirection@@@Z
    virtual long SetSelection(unsigned long, EditControlRange, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositeContextAdapter@@UEAA@XZ
    virtual ~CCompositeContextAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCompositionCch@CCompositeContextAdapter@@AEBAHXZ
    int _GetCompositionCch() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentContext@CCompositeContextAdapter@@AEBAPEAUIAdaptedInputContext@@XZ
    IAdaptedInputContext * _GetCurrentContext() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInComposition@CCompositeContextAdapter@@AEBA_NXZ
    bool _IsInComposition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCompositionContext@CCompositeContextAdapter@@AEAAXPEAUIAdaptedInputContext@@@Z
    void _SetCompositionContext(IAdaptedInputContext *);
};
