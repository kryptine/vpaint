// Copyright (C) 2012-2016 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// This file is part of VPaint, a vector graphics editor. It is subject to the
// license terms and conditions in the LICENSE.MIT file found in the top-level
// directory of this distribution and at http://opensource.org/licenses/MIT

#ifndef SPINBOX_H
#define SPINBOX_H

#include <QSpinBox>

/// \class SpinBox
/// \brief A subclass of QSpinBox with customized sizing and styling.
///
class SpinBox: public QSpinBox
{
public:
    /// Creates a SpinBox with the given \p parent.
    ///
    SpinBox(QWidget * parent = nullptr);

    /// Reimplemented from QSpinBox::minimumSizeHint().
    ///
    virtual QSize minimumSizeHint() const override;

    /// Reimplemented from QSpinBox::sizeHint().
    ///
    virtual QSize sizeHint() const override;
};

#endif // SPINBOX_H