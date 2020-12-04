#include "edi_layout.hpp"

#include "keybrd_eventer.hpp"
#include "mode_manager.hpp"
#include "keystroke_repeater.hpp"
#include "utility.hpp"

struct EdiNRemoveEOL::Impl
{
    KeyStrokeRepeater ksr{} ;
} ;

EdiNRemoveEOL::EdiNRemoveEOL()
: pimpl(std::make_unique<Impl>())
{}

EdiNRemoveEOL::~EdiNRemoveEOL() noexcept                    = default ;
EdiNRemoveEOL::EdiNRemoveEOL(EdiNRemoveEOL&&)               = default ;
EdiNRemoveEOL& EdiNRemoveEOL::operator=(EdiNRemoveEOL&&)    = default ;
const std::string EdiNRemoveEOL::sname() noexcept
{
    return "edi_n_remove_EOL" ;
}
void EdiNRemoveEOL::sprocess(
        const bool first_call,
        const unsigned int repeat_num,
        const KeyLogger* UNUSED(parent_vkclgr),
        const KeyLogger* const UNUSED(parent_charlgr)) const
{
    auto remove = [] {
        KeybrdEventer::pushup(VKC_END) ;
        KeybrdEventer::pushup(VKC_DELETE) ;
        ModeManager::change_mode(ModeManager::Mode::EdiNormal) ;
    } ;
    if(first_call) {
        pimpl->ksr.reset() ;
        remove() ;
    }
    else if(pimpl->ksr.is_pressed()) {
        remove() ;
    }
}
