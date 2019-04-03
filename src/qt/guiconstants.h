// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2018 The Pivx developers
// Copyright (c) 2017-2019 The Solaris developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_GUICONSTANTS_H
#define BITCOIN_QT_GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 1000;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* Solaris GUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;

/* Invalid field background style */
#define STYLE_INVALID "background:#FE0048"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(198, 198, 201)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(254, 0, 72)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(140, 140, 140)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(56, 127, 225)
/* Transaction list -- TX status decoration - offline */
#define COLOR_TX_STATUS_OFFLINE QColor(198, 198, 201)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(255, 255, 255)
/* Transaction list -- TX status decoration - conflicted */
#define COLOR_CONFLICTED QColor(254, 0, 72)
/* Transaction list -- TX status decoration - orphan (Light Gray #D3D3D3) */
#define COLOR_ORPHAN QColor(198, 198, 201)
/* Transaction list -- TX status decoration - stake (BlueViolet #8A2BE2) */
#define COLOR_STAKE QColor(56,127,225)
/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define EXPORT_IMAGE_SIZE 256

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 35

#define QAPP_ORG_NAME "Solaris"
#define QAPP_ORG_DOMAIN "solariscoin.com"
#define QAPP_APP_NAME_DEFAULT "Solaris-Qt"
#define QAPP_APP_NAME_TESTNET "Solaris-Qt-testnet"

#endif // BITCOIN_QT_GUICONSTANTS_H
