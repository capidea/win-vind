#ifndef _EDI_DELETE_HPP
#define _EDI_DELETE_HPP

#include "bind/binded_func_creator.hpp"

namespace vind
{
    //Delete
    struct DeleteHighlightText : public BindedFuncCreator<DeleteHighlightText> {
        explicit DeleteHighlightText() ;
        static void sprocess() ;
        static void sprocess(core::NTypeLogger& parent_lgr) ;
        static void sprocess(const core::CharLogger& parent_lgr) ;
    } ;

    class DeleteLine : public BindedFuncCreator<DeleteLine> {
    private:
        struct Impl ;
        std::unique_ptr<Impl> pimpl ;

    public:
        void sprocess(unsigned int repeat_num=1) const ;
        void sprocess(core::NTypeLogger& parent_lgr) const ;
        void sprocess(const core::CharLogger& parent_lgr) const ;

        explicit DeleteLine() ;
        virtual ~DeleteLine() noexcept ;

        DeleteLine(DeleteLine&&) ;
        DeleteLine& operator=(DeleteLine&&) ;
        DeleteLine(const DeleteLine&)            = delete ;
        DeleteLine& operator=(const DeleteLine&) = delete ;

        bool is_for_changing_text() const noexcept override {
            return true ;
        }
    } ;


    class DeleteLineUntilEOL : public BindedFuncCreator<DeleteLineUntilEOL> {
    private:
        struct Impl ;
        std::unique_ptr<Impl> pimpl ;

    public:
        void sprocess(unsigned int repeat_num=1) const ;
        void sprocess(core::NTypeLogger& parent_lgr) const ;
        void sprocess(const core::CharLogger& parent_lgr) const ;

        explicit DeleteLineUntilEOL() ;
        virtual ~DeleteLineUntilEOL() noexcept ;

        DeleteLineUntilEOL(DeleteLineUntilEOL&&) ;
        DeleteLineUntilEOL& operator=(DeleteLineUntilEOL&&) ;
        DeleteLineUntilEOL(const DeleteLineUntilEOL&)            = delete ;
        DeleteLineUntilEOL& operator=(const DeleteLineUntilEOL&) = delete ;

        bool is_for_changing_text() const noexcept override {
            return true ;
        }
    } ;

    class DeleteAfter : public BindedFuncCreator<DeleteAfter> {
    private:
        struct Impl ;
        std::unique_ptr<Impl> pimpl ;

    public:
        void sprocess(unsigned int repeat_num=1) const ;
        void sprocess(core::NTypeLogger& parent_lgr) const ;
        void sprocess(const core::CharLogger& parent_lgr) const ;

        explicit DeleteAfter() ;
        virtual ~DeleteAfter() noexcept ;

        DeleteAfter(DeleteAfter&&) ;
        DeleteAfter& operator=(DeleteAfter&&) ;
        DeleteAfter(const DeleteAfter&)            = delete ;
        DeleteAfter& operator=(const DeleteAfter&) = delete ;

        bool is_for_changing_text() const noexcept override {
            return true ;
        }
    } ;

    class DeleteBefore : public BindedFuncCreator<DeleteBefore> {
    private:
        struct Impl ;
        std::unique_ptr<Impl> pimpl ;

    public:
        void sprocess(unsigned int repeat_num=1) const ;
        void sprocess(core::NTypeLogger& parent_lgr) const ;
        void sprocess(const core::CharLogger& parent_lgr) const ;

        explicit DeleteBefore() ;
        virtual ~DeleteBefore() noexcept ;

        DeleteBefore(DeleteBefore&&) ;
        DeleteBefore& operator=(DeleteBefore&&) ;
        DeleteBefore(const DeleteBefore&)            = delete ;
        DeleteBefore& operator=(const DeleteBefore&) = delete ;

        bool is_for_changing_text() const noexcept override {
            return true ;
        }
    } ;
}

#endif
