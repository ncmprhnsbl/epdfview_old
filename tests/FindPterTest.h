// ePDFView - Find Presenter Test Fixture.
// Copyright (C) 2006, 2007, 2009 Emma's Software.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#if !defined (__FIND_PTER_TEST_H__)
#define __FIND_PTER_TEST_H__

#include <cppunit/extensions/HelperMacros.h>

namespace ePDFView
{
    class FindPterTest: public CppUnit::TestFixture
    {
        CPPUNIT_TEST_SUITE (FindPterTest);
        CPPUNIT_TEST (viewSensitivity);
        CPPUNIT_TEST (textDoesNotExist);
        CPPUNIT_TEST (findNext);
        CPPUNIT_TEST (findPrevious);
        CPPUNIT_TEST_SUITE_END ();

        public:
            void setUp (void);
            void tearDown (void);

            void viewSensitivity (void);
            void textDoesNotExist (void);
            void findNext (void);
            void findPrevious (void);

        private:
            PDFDocument *m_Document;
            FindPter *m_FindPter;
            DumbDocumentObserver *m_Observer;
            DumbFindView *m_View;
    };
}

#endif // !__FIND_PTER_TEST_H__
