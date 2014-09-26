/*
 * CompilationDatabase.cpp
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#include "CompilationDatabase.hpp"

#include <core/Error.hpp>


using namespace core ;

namespace session {
namespace modules { 
namespace clang {
namespace libclang {

namespace {


} // anonymous namespace

CompilationDatabase::~CompilationDatabase()
{
   try
   {

   }
   catch(...)
   {
   }
}



CompilationDatabase& compilationDatabase()
{
   static CompilationDatabase instance;
   return instance;
}



} // namespace libclang
} // namespace clang
} // namespace modules
} // namesapce session

