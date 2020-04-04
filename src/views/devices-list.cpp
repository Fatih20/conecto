/* devices-list.cpp
 *
 * Copyright 2020 Hannes Schulze <haschu0103@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "devices-list.h"

using namespace App::Views;
using namespace App::Models;

DevicesList::DevicesList (const Glib::RefPtr<ConnectedDevices>& connected_devices)
    : Gtk::TreeView (connected_devices)
    , m_connected_devices (connected_devices)
{
    append_column ("Name", m_connected_devices->column_name);
    append_column ("ID", m_connected_devices->column_id);
    append_column ("Type", m_connected_devices->column_type);
    append_column ("Battery", m_connected_devices->column_battery);
    append_column ("Charging", m_connected_devices->column_charging);
    append_column ("Starred", m_connected_devices->column_starred);
    append_column ("Host", m_connected_devices->column_host_addr);
    append_column ("Port", m_connected_devices->column_host_port);
}