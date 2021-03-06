/*
 * libhntqtutils
 * Copyright (C) 2020  Luca Cireddu (sardylan@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#ifndef __LIBHNTQTUTILS__SERVICE_H
#define __LIBHNTQTUTILS__SERVICE_H

#include <QtCore/QObject>
#include <QtCore/QThread>

namespace libhntqtutils {

    class Service : public QObject {
    Q_OBJECT

    public:

        explicit Service(QObject *parent);

        ~Service() override;

    public slots:

        virtual void start() = 0;

        virtual void stop() = 0;

    private:

        QThread *thread;

    };

}

#endif
