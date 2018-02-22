#include "Notes.hpp"

Note Note::Sharp() const
{
    switch (pitch)
    {
        case C_PITCH:
            return CSharp;
        case CSharp_PITCH:
            return D;
        case DFlat_PITCH:
            return D;
        case D_PITCH:
            return DSharp;
        case DSHARP_PITCH:
            return E;
        case EFlat_PITCH:
            return E;
        case E_PITCH:
            return F;
        case F_PITCH:
            return FSharp;
        case FSHARP_PITCH:
            return G;
        case GFLAT_PITCH:
            return G;
        case G_PITCH:
            return GSharp;
        case GSHARP_PITCH:
            return A;
        case AFLAT_PITCH:
            return A;
        case A_PITCH:
            return ASharp;
        case ASHARP_PITCH:
            return B;
        case BFLAT_PITCH:
            return B;
        case B_PITCH:
            return C;
        default:
            return *this;
    }
}

Note Note::Flat() const
{
    switch (pitch)
    {
        case C_PITCH:
            return B;
        case CSharp_PITCH:
            return C;
        case DFlat_PITCH:
            return C;
        case D_PITCH:
            return DFlat;
        case DSHARP_PITCH:
            return D;
        case EFlat_PITCH:
            return D;
        case E_PITCH:
            return EFlat;
        case F_PITCH:
            return E;
        case FSHARP_PITCH:
            return F;
        case GFLAT_PITCH:
            return F;
        case G_PITCH:
            return GFlat;
        case GSHARP_PITCH:
            return G;
        case AFLAT_PITCH:
            return G;
        case A_PITCH:
            return AFlat;
        case ASHARP_PITCH:
            return A;
        case BFLAT_PITCH:
            return A;
        case B_PITCH:
            return BFlat;
        default:
            return *this;
    }
}

