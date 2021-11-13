#include "scroll.hpp"

#include <windows.h>

#include "core/g_params.hpp"
#include "core/ntype_logger.hpp"
#include "util/def.hpp"
#include "util/interval_timer.hpp"
#include "util/keystroke_repeater.hpp"
#include "util/mouse.hpp"

#if defined(DEBUG)
#include <iostream>
#endif


namespace
{
    const auto MAX_X_POS = GetSystemMetrics(SM_CXSCREEN) ;
    const auto MAX_Y_POS = GetSystemMetrics(SM_CYSCREEN) ;

    constexpr auto DELTA_US = 30 ;
    constexpr auto WAIT_MS  = 30 ;

    constexpr auto SCROLL_FACTOR_FROM_COMMAND = 10 ;
}


namespace vind
{
    //ScrollUp
    struct ScrollUp::Impl {
        util::KeyStrokeRepeater ksr_{WAIT_MS} ;
    } ;

    ScrollUp::ScrollUp()
    : BindedFuncCreator("scroll_up"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollUp::~ScrollUp() noexcept            = default ;
    ScrollUp::ScrollUp(ScrollUp&&)            = default ;
    ScrollUp& ScrollUp::operator=(ScrollUp&&) = default ;

    void ScrollUp::sprocess(unsigned int repeat_num) const {
        util::vscroll(core::get_i("vscroll_speed") * repeat_num) ;
    }
    void ScrollUp::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->ksr_.reset() ;
        }
        else if(pimpl->ksr_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollUp::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(1) ;
    }


    //ScrollDown
    struct ScrollDown::Impl {
        util::KeyStrokeRepeater ksr_{WAIT_MS} ;
    } ;

    ScrollDown::ScrollDown()
    : BindedFuncCreator("scroll_down"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollDown::~ScrollDown() noexcept              = default ;
    ScrollDown::ScrollDown(ScrollDown&&)            = default ;
    ScrollDown& ScrollDown::operator=(ScrollDown&&) = default ;

    void ScrollDown::sprocess(unsigned int repeat_num) const {
        util::vscroll(-core::get_i("vscroll_speed") * repeat_num) ;
    }
    void ScrollDown::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->ksr_.reset() ;
        }
        else if(pimpl->ksr_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollDown::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(1) ;
    }


    //ScrollUpHalfPage
    struct ScrollUpHalfPage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollUpHalfPage::ScrollUpHalfPage()
    : BindedFuncCreator("scroll_up_halfpage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollUpHalfPage::~ScrollUpHalfPage() noexcept               = default ;
    ScrollUpHalfPage::ScrollUpHalfPage(ScrollUpHalfPage&&)            = default ;
    ScrollUpHalfPage& ScrollUpHalfPage::operator=(ScrollUpHalfPage&&) = default ;

    void ScrollUpHalfPage::sprocess(unsigned int repeat_num) const {
        util::vscroll(0.5f * static_cast<float>(MAX_Y_POS * repeat_num) * \
                core::get_f("vscroll_pageratio")) ;
    }
    void ScrollUpHalfPage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollUpHalfPage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollDownHalfPage
    struct ScrollDownHalfPage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollDownHalfPage::ScrollDownHalfPage()
    : BindedFuncCreator("scroll_down_halfpage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollDownHalfPage::~ScrollDownHalfPage() noexcept                    = default ;
    ScrollDownHalfPage::ScrollDownHalfPage(ScrollDownHalfPage&&)               = default ;
    ScrollDownHalfPage& ScrollDownHalfPage::operator=(ScrollDownHalfPage&&)    = default ;

    void ScrollDownHalfPage::sprocess(unsigned int repeat_num) const {
        util::vscroll(-0.5f * static_cast<float>(MAX_Y_POS * repeat_num) * \
                core::get_f("vscroll_pageratio")) ;
    }
    void ScrollDownHalfPage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollDownHalfPage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollUpOnePage
    struct ScrollUpOnePage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollUpOnePage::ScrollUpOnePage()
    : BindedFuncCreator("scroll_up_onepage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollUpOnePage::~ScrollUpOnePage() noexcept                  = default ;
    ScrollUpOnePage::ScrollUpOnePage(ScrollUpOnePage&&)              = default ;
    ScrollUpOnePage& ScrollUpOnePage::operator=(ScrollUpOnePage&&)   = default ;

    void ScrollUpOnePage::sprocess(unsigned int repeat_num) const {
        util::vscroll(static_cast<float>(MAX_Y_POS * repeat_num) * \
                core::get_f("vscroll_pageratio")) ;
    }
    void ScrollUpOnePage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollUpOnePage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollDownOnePage
    struct ScrollDownOnePage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollDownOnePage::ScrollDownOnePage()
    : BindedFuncCreator("scroll_down_onepage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollDownOnePage::~ScrollDownOnePage() noexcept                  = default ;
    ScrollDownOnePage::ScrollDownOnePage(ScrollDownOnePage&&)            = default ;
    ScrollDownOnePage& ScrollDownOnePage::operator=(ScrollDownOnePage&&) = default ;

    void ScrollDownOnePage::sprocess(unsigned int repeat_num) const {
        util::vscroll(static_cast<float>(MAX_Y_POS * repeat_num) * \
                -core::get_f("vscroll_pageratio")) ;
    }
    void ScrollDownOnePage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollDownOnePage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //Horizontal
    //ScrollLeft
    struct ScrollLeft::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollLeft::ScrollLeft()
    : BindedFuncCreator("scroll_left"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollLeft::~ScrollLeft() noexcept              = default ;
    ScrollLeft::ScrollLeft(ScrollLeft&&)            = default ;
    ScrollLeft& ScrollLeft::operator=(ScrollLeft&&) = default ;

    void ScrollLeft::sprocess(unsigned int repeat_num) const {
        util::hscroll(-core::get_i("hscroll_speed") * repeat_num) ;
    }
    void ScrollLeft::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollLeft::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollRight
    struct ScrollRight::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollRight::ScrollRight()
    : BindedFuncCreator("scroll_right"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollRight::~ScrollRight() noexcept                = default ;
    ScrollRight::ScrollRight(ScrollRight&&)             = default ;
    ScrollRight& ScrollRight::operator=(ScrollRight&&)  = default ;

    void ScrollRight::sprocess(unsigned int repeat_num) const {
        util::hscroll(core::get_f("hscroll_speed") * repeat_num) ;
    }
    void ScrollRight::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollRight::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollLeftHalfPage
    struct ScrollLeftHalfPage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollLeftHalfPage::ScrollLeftHalfPage()
    : BindedFuncCreator("scroll_left_halfpage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollLeftHalfPage::~ScrollLeftHalfPage() noexcept                    = default ;
    ScrollLeftHalfPage::ScrollLeftHalfPage(ScrollLeftHalfPage&&)               = default ;
    ScrollLeftHalfPage& ScrollLeftHalfPage::operator=(ScrollLeftHalfPage&&)    = default ;

    void ScrollLeftHalfPage::sprocess(unsigned int repeat_num) const {
        util::hscroll(-0.5f * static_cast<float>(MAX_X_POS * repeat_num) * \
                core::get_f("hscroll_pageratio")) ;
    }
    void ScrollLeftHalfPage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollLeftHalfPage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }


    //ScrollRightHalfPage
    struct ScrollRightHalfPage::Impl {
        util::IntervalTimer timer_{DELTA_US} ;
    } ;

    ScrollRightHalfPage::ScrollRightHalfPage()
    : BindedFuncCreator("scroll_right_halfpage"),
      pimpl(std::make_unique<Impl>())
    {}

    ScrollRightHalfPage::~ScrollRightHalfPage() noexcept                  = default ;
    ScrollRightHalfPage::ScrollRightHalfPage(ScrollRightHalfPage&&)            = default ;
    ScrollRightHalfPage& ScrollRightHalfPage::operator=(ScrollRightHalfPage&&) = default ;

    void ScrollRightHalfPage::sprocess(unsigned int repeat_num) const {
        util::hscroll(0.5f * static_cast<float>(MAX_X_POS * repeat_num) * \
                core::get_f("hscroll_pageratio")) ;
    }
    void ScrollRightHalfPage::sprocess(core::NTypeLogger& parent_lgr) const {
        if(!parent_lgr.is_long_pressing()) {
            sprocess(parent_lgr.get_head_num()) ;
            pimpl->timer_.reset() ;
        }
        else if(pimpl->timer_.is_passed()) {
            sprocess(1) ;
        }
    }
    void ScrollRightHalfPage::sprocess(const core::CharLogger& UNUSED(parent_lgr)) const {
        sprocess(SCROLL_FACTOR_FROM_COMMAND) ;
    }
}
