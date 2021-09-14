// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ULTRACOIN_QT_ULTRACOINADDRESSVALIDATOR_H
#define ULTRACOIN_QT_ULTRACOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class UltracoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit UltracoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Ultracoin address widget validator, checks for a valid ultracoin address.
 */
class UltracoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit UltracoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // ULTRACOIN_QT_ULTRACOINADDRESSVALIDATOR_H
