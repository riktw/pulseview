/*
 * This file is part of the PulseView project.
 *
 * Copyright (C) 2015 Joel Holdsworth <joel@airwebreathe.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <boost/filesystem.hpp>

#include "file.hpp"

using std::string;

namespace pv {
namespace devices {

File::File(const string &file_name) :
	file_name_(file_name)
{
}

string File::full_name() const
{
	return file_name_;
}

string File::display_name(const DeviceManager&) const
{
	return boost::filesystem::path(file_name_).filename().string();
}

} // namespace devices
} // namespace pv
