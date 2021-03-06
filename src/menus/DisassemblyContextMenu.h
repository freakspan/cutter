#ifndef DISASSEMBLYCONTEXTMENU_H
#define DISASSEMBLYCONTEXTMENU_H

#include "cutter.h"
#include <QMenu>
#include <QKeySequence>

class DisassemblyContextMenu : public QMenu
{
Q_OBJECT

public:
    DisassemblyContextMenu(QWidget *parent = nullptr);
    ~DisassemblyContextMenu() = default;


public slots:
    void setOffset(RVA offset);

    void on_actionAddComment_triggered();
    void on_actionAddFlag_triggered();
    void on_actionRename_triggered();
    void on_actionXRefs_triggered();
    void on_actionDisplayOptions_triggered();

private:
    void init();

    QKeySequence getCommentSequence() const;
    QKeySequence getAddFlagSequence() const;
    QKeySequence getRenameSequence() const;
    QKeySequence getXRefSequence() const;
    QKeySequence getDisplayOptionsSequence() const;

    RVA offset;

    QAction actionAddComment;
    QAction actionAddFlag;
    QAction actionRename;
    QAction actionXRefs;
    QAction actionDisplayOptions;
};
#endif // DISASSEMBLYCONTEXTMENU_H
