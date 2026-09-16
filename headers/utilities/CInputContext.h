#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 188 member(s).
class CInputContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseMouseSink@CInputContext@@UEAAJPEAUITfRange@@PEAUITfMouseSink@@PEAK@Z
    virtual long AdviseMouseSink(ITfRange *, ITfMouseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSingleSink@CInputContext@@UEAAJKAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long AdviseSingleSink(unsigned long, _GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CInputContext@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAK@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsITfContext@CInputContext@@SAPEAUITfContext@@PEAV1@@Z
    static ITfContext * AsITfContext(CInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPostponedLockRequest@CInputContext@@UEAAK_N@Z
    virtual unsigned long BeginPostponedLockRequest(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputContext@@QEAA@XZ
    CInputContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseCandidateUI@CInputContext@@UEAAJXZ
    virtual long CloseCandidateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComposition@CInputContext@@UEAAJKPEAUITfCompositionSink@@PEAPEAUITfComposition@@@Z
    virtual long CreateComposition(unsigned long, ITfCompositionSink *, ITfComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRange@CInputContext@@UEAAJJJPEAPEAUITfRangeACP@@@Z
    virtual long CreateRange(long, long, ITfRangeACP * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRange@CInputContext@@UEAAJPEAUIAnchor@@0PEAPEAUITfRangeAnchor@@@Z
    virtual long CreateRange(IAnchor *, IAnchor *, ITfRangeAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRangeBackup@CInputContext@@UEAAJKPEAUITfRange@@PEAPEAUITfRangeBackup@@@Z
    virtual long CreateRangeBackup(unsigned long, ITfRange *, ITfRangeBackup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlRangeFromRangePtr@CInputContext@@QEAAJPEAUITfRange@@PEAUEditControlRange@@@Z
    long EditControlRangeFromRangePtr(ITfRange *, EditControlRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLockRequestPosting@CInputContext@@UEAAJH@Z
    virtual long EnableLockRequestPosting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@CInputContext@@UEAAJKPEAUITfComposition@@@Z
    virtual long EndComposition(unsigned long, ITfComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCompositions@CInputContext@@UEAAJPEAPEAUIEnumITfCompositionView@@@Z
    virtual long EnumCompositions(IEnumITfCompositionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumProperties@CInputContext@@UEAAJPEAPEAUIEnumTfProperties@@@Z
    virtual long EnumProperties(IEnumTfProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumViews@CInputContext@@UEAAJPEAPEAUIEnumTfContextViews@@@Z
    virtual long EnumViews(IEnumTfContextViews * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeComposition@CInputContext@@UEAA_NK@Z
    virtual bool FinalizeComposition(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeCurrentComposition@CInputContext@@UEAAXXZ
    virtual void FinalizeCurrentComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindComposition@CInputContext@@UEAAJKPEAUITfRange@@PEAPEAUIEnumITfCompositionView@@@Z
    virtual long FindComposition(unsigned long, ITfRange *, IEnumITfCompositionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextRenderingMarkup@CInputContext@@UEAAJKKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAPEAU2@PEAU__MIDL___MIDL_itf_msctfp_0000_0019_0001@@@Z
    virtual long FindNextRenderingMarkup(unsigned long, unsigned long, ITfRange *, int, ITfRange * *, __MIDL___MIDL_itf_msctfp_0000_0019_0001*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceLoadProperty@CInputContext@@UEAAJPEAUITfProperty@@@Z
    virtual long ForceLoadProperty(ITfProperty *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveView@CInputContext@@UEAAJPEAPEAUITfContextView@@@Z
    virtual long GetActiveView(ITfContextView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveViewId@CInputContext@@UEAAKXZ
    virtual unsigned long GetActiveViewId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppProperty@CInputContext@@UEAAJAEBU_GUID@@PEAPEAUITfReadOnlyProperty@@@Z
    virtual long GetAppProperty(_GUID const &, ITfReadOnlyProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppPropertyValue@CInputContext@@UEAA_NAEBU_GUID@@PEAUtagVARIANT@@@Z
    virtual bool GetAppPropertyValue(_GUID const &, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryManager@CInputContext@@UEAAPEAUITfCategoryMgr@@XZ
    virtual ITfCategoryMgr * GetCategoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionOwner@CInputContext@@UEAAKXZ
    virtual unsigned long GetCompositionOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSelection@CInputContext@@UEAAJPEAUEditControlRange@@@Z
    virtual long GetCurrentSelection(EditControlRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentMgr@CInputContext@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long GetDocumentMgr(ITfDocumentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnd@CInputContext@@UEAAJKPEAPEAUITfRange@@@Z
    virtual long GetEnd(unsigned long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScopeValue@CInputContext@@UEAA?AW4__MIDL___MIDL_itf_inputscope_0000_0000_0001@@PEA_N@Z
    virtual int GetInputScopeValue(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyEventSink@CInputContext@@UEAAPEAUITfContextKeyEventSink@@XZ
    virtual ITfContextKeyEventSink * GetKeyEventSink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMappedAppProperty@CInputContext@@UEAAJAEBU_GUID@@PEAPEAUITfProperty@@@Z
    virtual long GetMappedAppProperty(_GUID const &, ITfProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarkupCollection@CInputContext@@QEAAPEAVCRenderMarkupCollection@@XZ
    CRenderMarkupCollection * GetMarkupCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerId@CInputContext@@UEBAKXZ
    virtual unsigned long GetOwnerId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CInputContext@@UEAAJAEBU_GUID@@PEAPEAUITfProperty@@@Z
    virtual long GetProperty(_GUID const &, ITfProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRangeText@CInputContext@@UEAAJKKPEAKPEAG@Z
    virtual long GetRangeText(unsigned long, unsigned long, unsigned long *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingMarkup@CInputContext@@UEAAJKKPEAUITfRange@@PEAPEAUIEnumTfRenderingMarkup@@@Z
    virtual long GetRenderingMarkup(unsigned long, unsigned long, ITfRange *, IEnumTfRenderingMarkup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CInputContext@@UEAAJKKKPEAUTF_SELECTION@@PEAK@Z
    virtual long GetSelection(unsigned long, unsigned long, unsigned long, TF_SELECTION *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CInputContext@@UEAAJKPEAUEditControlRange@@@Z
    virtual long GetSelection(unsigned long, EditControlRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CInputContext@@UEAAJKPEAPEAUITfRange@@@Z
    virtual long GetStart(unsigned long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CInputContext@@UEAAJPEAUTS_STATUS@@@Z
    virtual long GetStatus(TS_STATUS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusChangedFlags@CInputContext@@UEBAKXZ
    virtual unsigned long GetStatusChangedFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentation@CInputContext@@UEAAJJPEAPEAUITfTextRangeAugmentation@@@Z
    virtual long GetTextAugmentation(long, ITfTextRangeAugmentation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentations@CInputContext@@UEAAJJJPEAPEAUIEnumTfTextRangeAugmentation@@@Z
    virtual long GetTextAugmentations(long, long, IEnumTfTextRangeAugmentation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLength@CInputContext@@UEAAHXZ
    virtual int GetTextLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextOwnerProperty@CInputContext@@QEAAPEAVCProperty@@XZ
    CProperty * GetTextOwnerProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThis@CInputContext@@UEAAPEAV1@XZ
    virtual CInputContext * GetThis();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadInputManager@CInputContext@@UEAAPEAUIThreadInputManagerPrivate@@XZ
    virtual IThreadInputManagerPrivate * GetThreadInputManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InWriteSession@CInputContext@@UEAAJKPEAH@Z
    virtual long InWriteSession(unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbeddedAtSelection@CInputContext@@UEAAJKKPEAUIDataObject@@PEAPEAUITfRange@@@Z
    virtual long InsertEmbeddedAtSelection(unsigned long, unsigned long, IDataObject *, ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTextAtSelection@CInputContext@@UEAAJKKPEBGJPEAPEAUITfRange@@@Z
    virtual long InsertTextAtSelection(unsigned long, unsigned long, unsigned short const *, long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositeContext@CInputContext@@UEAA_NXZ
    virtual bool IsCompositeContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisabled@CInputContext@@UEAA_NXZ
    virtual bool IsDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmbeddedHandwritingViewVisible@CInputContext@@UEAA_NXZ
    virtual bool IsEmbeddedHandwritingViewVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmContext@CInputContext@@UEAA_NXZ
    virtual bool IsImmContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmEditWithCaret@CInputContext@@UEAA_NXZ
    virtual bool IsImmEditWithCaret();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManualInputPaneEnabled@CInputContext@@UEAA_NXZ
    virtual bool IsManualInputPaneEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiline@CInputContext@@UEAA_NXZ
    virtual bool IsMultiline();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CInputContext@@UEAA_NXZ
    virtual bool IsReadOnly();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReconversionMode@CInputContext@@UEAA_NXZ
    virtual bool IsReconversionMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTsfEditControl@CInputContext@@UEAA_NXZ
    virtual bool IsTsfEditControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVerticalWriting@CInputContext@@UEAA_NXZ
    virtual bool IsVerticalWriting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWritingSuggestionsDisabled@CInputContext@@UEAA_NXZ
    virtual bool IsWritingSuggestionsDisabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapAppProperty@CInputContext@@UEAAJAEBU_GUID@@0@Z
    virtual long MapAppProperty(_GUID const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttributeChange@CInputContext@@UEAAJAEBU_GUID@@@Z
    virtual long OnAttributeChange(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttrsChange@CInputContext@@UEAAJPEAUIAnchor@@0KPEBU_GUID@@@Z
    virtual long OnAttrsChange(IAnchor *, IAnchor *, unsigned long, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCUASCompositionEnded@CInputContext@@QEAAXK@Z
    void OnCUASCompositionEnded(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndEditTransaction@CInputContext@@UEAAJXZ
    virtual long OnEndEditTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CInputContext@@QEAAX_NPEAV1@@Z
    void OnFocusChange(bool, CInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmCompositionSubmitted@CInputContext@@UEAAXXZ
    virtual void OnImmCompositionSubmitted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChange@CInputContext@@UEAAJW4__MIDL___MIDL_itf_textstor_0000_0000_0002@@K@Z
    virtual long OnLayoutChange(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChange@CInputContext@@UEAAJXZ
    virtual long OnLayoutChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLockGranted@CInputContext@@UEAAJK@Z
    virtual long OnLockGranted(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPostponedLockRequest@CInputContext@@UEAA_NXZ
    virtual bool OnPostponedLockRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyUpdated@CInputContext@@QEAAXAEBU_GUID@@HHAEBUtagVARIANT@@@Z
    void OnPropertyUpdated(_GUID const &, int, int, tagVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChange@CInputContext@@UEAAJXZ
    virtual long OnSelectionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartEditTransaction@CInputContext@@UEAAJXZ
    virtual long OnStartEditTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusChange@CInputContext@@UEAAJK@Z
    virtual long OnStatusChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationAdded@CInputContext@@UEAAJPEAUITfTextRangeAugmentation@@@Z
    virtual long OnTextAugmentationAdded(ITfTextRangeAugmentation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationsRemoved@CInputContext@@UEAAJJJ@Z
    virtual long OnTextAugmentationsRemoved(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChange@CInputContext@@UEAAJKPEAUIAnchor@@0@Z
    virtual long OnTextChange(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChangePrivate@CInputContext@@QEAAXUTS_TEXTCHANGE@@W4TextChangeFlags@@@Z
    void OnTextChangePrivate(TS_TEXTCHANGE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWmChar@CInputContext@@UEAA_N_K_J@Z
    virtual bool OnWmChar(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertEmbedded@CInputContext@@UEAAJPEBU_GUID@@PEBUtagFORMATETC@@PEAH@Z
    virtual long QueryInsertEmbedded(_GUID const *, tagFORMATETC const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CInputContext@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueWorkItem@CInputContext@@UEAAJPEAUIWorkItem@@_NPEAJ@Z
    virtual long QueueWorkItem(IWorkItem *, bool, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reconvert@CInputContext@@UEAAJXZ
    virtual long Reconvert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEditSession@CInputContext@@UEAAJKPEAUITfEditSession@@KPEAJ@Z
    virtual long RequestEditSession(unsigned long, ITfEditSession *, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestLock@CInputContext@@UEAA_NK@Z
    virtual bool RequestLock(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestReconversion@CInputContext@@QEAAJ_N0@Z
    long RequestReconversion(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CInputContext@@UEAAJPEAUITfProperty@@PEAUITfRange@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@@Z
    virtual long Serialize(ITfProperty *, ITfRange *, TF_PERSISTENT_PROPERTY_HEADER_ACP *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CInputContext@@UEAAJPEAUITfProperty@@PEAUITfRange@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUIStream@@@Z
    virtual long Serialize(ITfProperty *, ITfRange *, TF_PERSISTENT_PROPERTY_HEADER_ANCHOR *, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionContextSink@CInputContext@@UEAAXPEAUICompositionContextSink@@@Z
    virtual void SetCompositionContextSink(ICompositionContextSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisabled@CInputContext@@UEAAX_N@Z
    virtual void SetDisabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImmEditWithCustomCaret@CInputContext@@UEAAX_N@Z
    virtual void SetImmEditWithCustomCaret(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterimSelection@CInputContext@@UEAAJKUEditControlRange@@@Z
    virtual long SetInterimSelection(unsigned long, EditControlRange);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManualInputPanelEnabled@CInputContext@@UEAAX_N@Z
    virtual void SetManualInputPanelEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReconversionCandidateList@CInputContext@@UEAAJHHPEBEI@Z
    virtual long SetReconversionCandidateList(int, int, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReconversionMode@CInputContext@@UEAAJH@Z
    virtual long SetReconversionMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CInputContext@@UEAAJKKPEBUTF_SELECTION@@@Z
    virtual long SetSelection(unsigned long, unsigned long, TF_SELECTION const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CInputContext@@UEAAJKUEditControlRange@@W4CaretBindDirection@@@Z
    virtual long SetSelection(unsigned long, EditControlRange, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellHandwritingEditSessionInChromium@CInputContext@@UEAAX_N@Z
    virtual void SetShellHandwritingEditSessionInChromium(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@CInputContext@@UEAAJKPEAUITfRange@@PEAUITfCompositionSink@@PEAPEAUITfComposition@@@Z
    virtual long StartComposition(unsigned long, ITfRange *, ITfCompositionSink *, ITfComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeOwnership@CInputContext@@UEAAJKPEAUITfCompositionView@@PEAUITfCompositionSink@@PEAPEAUITfComposition@@@Z
    virtual long TakeOwnership(unsigned long, ITfCompositionView *, ITfCompositionSink *, ITfComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateComposition@CInputContext@@UEAAJPEAUITfCompositionView@@@Z
    virtual long TerminateComposition(ITfCompositionView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackProperties@CInputContext@@UEAAJPEAPEBU_GUID@@K0KPEAPEAUITfReadOnlyProperty@@@Z
    virtual long TrackProperties(_GUID const * *, unsigned long, _GUID const * *, unsigned long, ITfReadOnlyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseMouseSink@CInputContext@@UEAAJK@Z
    virtual long UnadviseMouseSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSingleSink@CInputContext@@UEAAJKAEBU_GUID@@@Z
    virtual long UnadviseSingleSink(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CInputContext@@UEAAJK@Z
    virtual long UnadviseSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unserialize@CInputContext@@UEAAJPEAUITfProperty@@PEBUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@PEAUITfPersistentPropertyLoaderACP@@@Z
    virtual long Unserialize(ITfProperty *, TF_PERSISTENT_PROPERTY_HEADER_ACP const *, IStream *, ITfPersistentPropertyLoaderACP *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unserialize@CInputContext@@UEAAJPEAUITfProperty@@PEBUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUIStream@@PEAUITfPersistentPropertyLoaderAnchor@@@Z
    virtual long Unserialize(ITfProperty *, TF_PERSISTENT_PROPERTY_HEADER_ANCHOR const *, IStream *, ITfPersistentPropertyLoaderAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateKeyEventFilter@CInputContext@@UEAAJPEAK0@Z
    virtual long UpdateKeyEventFilter(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait_For_Reconversion_Candidates@CInputContext@@QEAAJPEAPEAUITfCandidateList@@@Z
    long Wait_For_Reconversion_Candidates(ITfCandidateList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait_For_Reconversion_Range@CInputContext@@QEAAJPEAPEAUITfRange@@@Z
    long Wait_For_Reconversion_Range(ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AbortCompositions@CInputContext@@QEAAXXZ
    void _AbortCompositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupContext@CInputContext@@QEAAXIPEAK@Z
    void _CleanupContext(unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContextNeedsCleanup@CInputContext@@QEAAHIPEAK@Z
    int _ContextNeedsCleanup(unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPseudoSyncEditSession@CInputContext@@QEAAJKKPEAXPEAJ@Z
    long _DoPseudoSyncEditSession(unsigned long, unsigned long, void *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterCompositionOp@CInputContext@@QEAAHXZ
    int _EnterCompositionOp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindProperty@CInputContext@@QEAAPEAVCProperty@@K@Z
    CProperty * _FindProperty(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInputScopeValue@CInputContext@@QEAA?AW4__MIDL___MIDL_itf_inputscope_0000_0000_0001@@PEA_N@Z
    int _GetInputScopeValue(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProperty@CInputContext@@QEAAJAEBU_GUID@@PEAPEAVCProperty@@@Z
    long _GetProperty(_GUID const &, CProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidEditCookie@CInputContext@@QEAAHKK@Z
    int _IsValidEditCookie(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyEndEdit@CInputContext@@QEAAHXZ
    int _NotifyEndEdit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Popped@CInputContext@@QEAAXXZ
    void _Popped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyTextUpdate@CInputContext@@QEAAXKPEAUIAnchor@@0@Z
    void _PropertyTextUpdate(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueItem@CInputContext@@QEAAJPEAU_TS_QUEUE_ITEM@@HPEAJ@Z
    long _QueueItem(_TS_QUEUE_ITEM *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartComposition@CInputContext@@QEAAJKPEAUIAnchor@@0PEAUITfCompositionSink@@PEAPEAVCComposition@@@Z
    long _StartComposition(unsigned long, IAnchor *, IAnchor *, ITfCompositionSink *, CComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TerminateCompositionWithLock@CInputContext@@QEAAJPEAUITfCompositionView@@K@Z
    long _TerminateCompositionWithLock(ITfCompositionView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnadviseSinks@CInputContext@@QEAAXXZ
    void _UnadviseSinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateKeyEventFilterCallback@CInputContext@@QEAAJK@Z
    long _UpdateKeyEventFilterCallback(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputContext@@UEAA@XZ
    virtual ~CInputContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEditRecord@CInputContext@@AEAA_NXZ
    bool EnsureEditRecord();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMapAppProperty@CInputContext@@AEAAPEAU_APPPROPMAP@1@AEBU_GUID@@@Z
    WindissectOpaque * FindMapAppProperty(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AbortQueueItems@CInputContext@@AEAAXXZ
    void _AbortQueueItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoPostTextEditNotifications@CInputContext@@AEAAXPEAVCComposition@@KKKPEAUIAnchor@@1PEAVCRange@@@Z
    void _DoPostTextEditNotifications(CComposition *, unsigned long, unsigned long, unsigned long, IAnchor *, IAnchor *, CRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditSessionQiCallback@CInputContext@@CAJPEAV1@PEAU_TS_QUEUE_ITEM@@W4QiCallbackCode@@@Z
    static long _EditSessionQiCallback(CInputContext *, _TS_QUEUE_ITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EmptyLockQueue@CInputContext@@AEAAJKH@Z
    long _EmptyLockQueue(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDisplayAttributeManager@CInputContext@@AEAA_NXZ
    bool _EnsureDisplayAttributeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBackingStoreContext@CInputContext@@AEAA_NPEAPEAV1@@Z
    bool _GetBackingStoreContext(CInputContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropStyle@CInputContext@@AEAA?AW4TFPROPERTYSTYLE@@AEBU_GUID@@@Z
    int _GetPropStyle(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTextStoreEventSource@CInputContext@@AEAAJPEAPEAUITfSource@@@Z
    long _GetTextStoreEventSource(ITfSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertXAtSelection@CInputContext@@AEAAJKKPEAU_IAS_OBJ@1@PEAPEAUITfRange@@@Z
    long _InsertXAtSelection(unsigned long, unsigned long, WindissectOpaque *, ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertXAtSelectionAggressive@CInputContext@@AEAAHKKPEAU_IAS_OBJ@1@PEAPEAUIAnchor@@1@Z
    int _InsertXAtSelectionAggressive(unsigned long, unsigned long, WindissectOpaque *, IAnchor * *, IAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MarkDirtyRanges@CInputContext@@AEAAXPEAUIAnchor@@0@Z
    void _MarkDirtyRanges(IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostponeLockRequest@CInputContext@@AEAAXK@Z
    void _PostponeLockRequest(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PseudoSyncEditSessionQiCallback@CInputContext@@CAJPEAV1@PEAU_TS_QUEUE_ITEM@@W4QiCallbackCode@@@Z
    static long _PseudoSyncEditSessionQiCallback(CInputContext *, _TS_QUEUE_ITEM *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnadviseOwnerSink@CInputContext@@AEAAJXZ
    long _UnadviseOwnerSink();
};
