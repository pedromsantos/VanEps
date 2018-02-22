#include "Notes.hpp"

std::string Note::Name() const
{
    switch (pitch)
    {
        case C_PITCH:
            return "C";
        case CSharp_PITCH:
            return "C#";
        case DFlat_PITCH:
            return "Db";
        case D_PITCH:
            return "D";
        case DSHARP_PITCH:
            return "D#";
        case EFlat_PITCH:
            return "Eb";
        case E_PITCH:
            return "E";
        case F_PITCH:
            return "F";
        case FSHARP_PITCH:
            return "F#";
        case GFLAT_PITCH:
            return "Gb";
        case G_PITCH:
            return "G";
        case GSHARP_PITCH:
            return "G#";
        case AFLAT_PITCH:
            return "Ab";
        case A_PITCH:
            return "A";
        case ASHARP_PITCH:
            return "A#";
        case BFLAT_PITCH:
            return "Bb";
        case B_PITCH:
            return "B";
        default:
            return "";
    }
}

Pitch Note::Pitch() const
{
    return pitch;
}

Note Note::Sharp() const
{
    return *this;
}

Note Note::Flat() const
{
    return *this;
}