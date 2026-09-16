#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class PopulatedText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@PopulatedText@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DehydrateAround@PopulatedText@@QEAAXH@Z
    void DehydrateAround(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkPopulated@PopulatedText@@QEAAXUEditControlRange@@PEAUMsgString@@@Z
    void MarkPopulated(EditControlRange, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChange@PopulatedText@@QEAAXUEditControlRange@@HPEAUMsgString@@@Z
    void OnTextChange(EditControlRange, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpopulatedSpanWithin@PopulatedText@@QEBA?AUEditControlRange@@U2@@Z
    EditControlRange UnpopulatedSpanWithin(EditControlRange) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopulatedText@@QEAA@XZ
    ~PopulatedText();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Coalesce@PopulatedText@@AEAAXXZ
    void _Coalesce();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Concat@PopulatedText@@AEAAPEAUMsgString@@AEAUSegment@1@0@Z
    MsgString * _Concat(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopySegmentsFrom@PopulatedText@@AEAAXAEBV1@@Z
    void _CopySegmentsFrom(PopulatedText const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Insert@PopulatedText@@AEAAXUEditControlRange@@PEAUMsgString@@@Z
    void _Insert(EditControlRange, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseText@PopulatedText@@AEAAXAEAUSegment@1@@Z
    void _ReleaseText(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Slice@PopulatedText@@AEBAPEAUMsgString@@AEBUSegment@1@UEditControlRange@@@Z
    MsgString * _Slice(WindissectOpaque const &, EditControlRange) const;
};
