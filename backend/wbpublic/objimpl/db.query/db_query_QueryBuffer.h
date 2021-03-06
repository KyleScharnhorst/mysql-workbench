/* 
 * Copyright (c) 2010, 2014, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#pragma once

#include <grts/structs.db.query.h>

class MySQLEditor;

class WBPUBLICBACKEND_PUBLIC_FUNC db_query_QueryBuffer::ImplData
{
public:
  ImplData(db_query_QueryBufferRef aself, boost::shared_ptr<MySQLEditor> aeditor)
    : self(dynamic_cast<db_query_QueryBuffer*>(aself.valueptr())), editor(aeditor)
  { 
  }
  
  db_query_QueryBuffer *self;
  boost::weak_ptr<MySQLEditor> editor;
};
