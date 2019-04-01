// Copyright (c) 2017-2018 The Solaris developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZXLRCONTROLDIALOG_H
#define ZXLRCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zxlr/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZXLRControlDialog;
}

class CZXLRControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZXLRControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZXLRControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZXLRControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZXLRControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZXLRControlDialog(QWidget *parent);
    ~ZXLRControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZXLRControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZXLRControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZXLRCONTROLDIALOG_H
