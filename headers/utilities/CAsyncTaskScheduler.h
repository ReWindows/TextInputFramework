#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 24 member(s).
class CAsyncTaskScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPendingTask@CAsyncTaskScheduler@@QEAAJIPEAPEAVCTask@@@Z
    long BeginPendingTask(unsigned int, CTask * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncTaskScheduler@@QEAA@XZ
    CAsyncTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingEditActions@CAsyncTaskScheduler@@QEAAJW4TaskState@@@Z
    long CancelPendingEditActions(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingQueriesByType@CAsyncTaskScheduler@@QEAAXW4TaskType@@@Z
    void CancelPendingQueriesByType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingTasks@CAsyncTaskScheduler@@QEAAJXZ
    long CancelPendingTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTask@CAsyncTaskScheduler@@QEAAJPEAVCTask@@@Z
    long CancelTask(CTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletePendingTask@CAsyncTaskScheduler@@QEAAJIPEAPEAVCTask@@@Z
    long CompletePendingTask(unsigned int, CTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTask@CAsyncTaskScheduler@@QEAAJPEAVCTask@@@Z
    long CompleteTask(CTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueTask@CAsyncTaskScheduler@@QEAAJPEAVCTask@@@Z
    long ContinueTask(CTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferCurrentTask@CAsyncTaskScheduler@@QEAAJPEAI@Z
    long DeferCurrentTask(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateQueryID@CAsyncTaskScheduler@@QEAAJPEAI@Z
    long GenerateQueryID(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentEditAction@CAsyncTaskScheduler@@QEBA?AV?$ComPtr@VCTask@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCurrentEditAction() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPendingEditAction@CAsyncTaskScheduler@@QEAA?AV?$ComPtr@VCEditActionAsync@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCurrentPendingEditAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTask@CAsyncTaskScheduler@@QEAA?AV?$ComPtr@VCTask@@@WRL@Microsoft@@XZ
    WindissectOpaque GetCurrentTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskInProgress@CAsyncTaskScheduler@@QEAA?AV?$ComPtr@VCTask@@@WRL@Microsoft@@XZ
    WindissectOpaque GetTaskInProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingTask@CAsyncTaskScheduler@@QEAA_NW4TaskType@@_N@Z
    bool HasPendingTask(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskCanceled@CAsyncTaskScheduler@@QEAA_NPEAVCTask@@@Z
    bool IsTaskCanceled(CTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCancellations@CAsyncTaskScheduler@@QEAAJXZ
    long RunCancellations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTask@CAsyncTaskScheduler@@QEAAJPEAVCTask@@@Z
    long StartTask(CTask *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsyncTaskScheduler@@UEAA@XZ
    virtual ~CAsyncTaskScheduler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateID@CAsyncTaskScheduler@@AEAAIXZ
    unsigned int GenerateID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyOnEmpty@CAsyncTaskScheduler@@AEBAXXZ
    void _NotifyOnEmpty() const;
};
