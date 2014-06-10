// Copyright (c) 2014 Thomas Fussell
// Copyright (c) 2010-2014 openpyxl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file
#pragma once

#include <string>
#include <vector>

namespace xlnt {
    
class workbook;
class worksheet;
    
class writer
{
public:
    static std::string write_workbook(const workbook &wb);
    static std::string write_worksheet(worksheet ws);
    static std::string write_worksheet(worksheet ws, const std::vector<std::string> &string_table);
    static std::string write_worksheet(worksheet ws, const std::vector<std::string> &string_table, const std::unordered_map<std::size_t, std::string> &style_table);
    static std::string write_theme();
    static std::string write_content_types(const std::pair<std::unordered_map<std::string, std::string>, std::unordered_map<std::string, std::string>> &content_types);
    static std::string write_relationships(const std::vector<std::pair<std::string, std::pair<std::string, std::string>>> &relationships);
    static std::string write_workbook_rels(const workbook &wb);
    static std::string write_worksheet_rels(worksheet ws, int drawing_id, int comments_id);
    static std::string write_string_table(const std::vector<std::string> &string_table);
};
    
} // namespace xlnt
