/********************************************************************
    Copyright (c) 2013-2014 - QSanguosha-Rara

    This file is part of QSanguosha-Hegemony.

    This game is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 3.0
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    See the LICENSE file for more details.

    QSanguosha-Rara
    *********************************************************************/

#ifndef _CLIENT_STRUCT_H
#define _CLIENT_STRUCT_H

#include "player.h"
#include "qsanselectableitem.h"
#include "protocol.h"
#include "roomconfig.h"

#include <QMap>
#include <QWidget>

class QLabel;
class QListWidget;

extern RoomInfoStruct ServerInfo;

class ServerInfoWidget : public QWidget {
    Q_OBJECT

public:
    ServerInfoWidget(bool show_lack = false);
    void fill(const RoomInfoStruct &info, const QString &address);
    void updateLack(int count);
    void clear();

private:
    QLabel *name_label;
    QLabel *address_label;
    QLabel *port_label;
    QLabel *game_mode_label;
    QLabel *player_count_label;
    QLabel *random_seat_label;
    QLabel *enable_cheat_label;
    QLabel *free_choose_label;
    QLabel *forbid_adding_robot_label;
    QLabel *fisrt_showing_reward_label;
    QLabel *time_limit_label;
    QLabel *lack_label;
    QListWidget *list_widget;
};
#endif

