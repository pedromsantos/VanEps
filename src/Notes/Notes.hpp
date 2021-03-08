#ifndef VANEPS_NOTES_H
#define VANEPS_NOTES_H

class Note
{
public:

    enum Pitch
    {
        C_PITCH,
        CSharp_PITCH,
        DFlat_PITCH,
        D_PITCH,
        DSHARP_PITCH,
        EFlat_PITCH,
        E_PITCH,
        F_PITCH,
        FSHARP_PITCH,
        GFLAT_PITCH,
        G_PITCH,
        GSHARP_PITCH,
        AFLAT_PITCH,
        A_PITCH,
        ASHARP_PITCH,
        BFLAT_PITCH,
        B_PITCH
    };

    constexpr explicit Note(enum Pitch pitch) noexcept : pitch(pitch) {}

    constexpr bool operator==(const Note &otherNote) const
    {
        return pitch == otherNote.pitch;
    }

    constexpr int MeasureAbsoluteSemitones(const Note &otherNote) const
    {
        const int octave = 12;
        const int unisson = 0;

        auto distance = otherNote.Pitch() - Pitch();

        return distance < unisson
               ? octave - distance * -1
               : distance;
    }

    constexpr const char* Name() const
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

    Note Sharp() const;
    Note Flat() const;

private:
    const enum Pitch pitch;

    constexpr int Pitch() const
    {
        switch (pitch)
        {
            case C_PITCH:
                return 0;
            case CSharp_PITCH:
                return 1;
            case DFlat_PITCH:
                return 1;
            case D_PITCH:
                return 2;
            case DSHARP_PITCH:
                return 3;
            case EFlat_PITCH:
                return 3;
            case E_PITCH:
                return 4;
            case F_PITCH:
                return 5;
            case FSHARP_PITCH:
                return 6;
            case GFLAT_PITCH:
                return 6;
            case G_PITCH:
                return 7;
            case GSHARP_PITCH:
                return 8;
            case AFLAT_PITCH:
                return 8;
            case A_PITCH:
                return 9;
            case ASHARP_PITCH:
                return 10;
            case BFLAT_PITCH:
                return 10;
            case B_PITCH:
                return 11;
            default:
                return 0;
        }
    }
};

constexpr Note C(Note::C_PITCH);
constexpr Note CSharp(Note::CSharp_PITCH);
constexpr Note DFlat(Note::DFlat_PITCH);
constexpr Note D(Note::D_PITCH);
constexpr Note DSharp(Note::DSHARP_PITCH);
constexpr Note EFlat(Note::EFlat_PITCH);
constexpr Note E(Note::E_PITCH);
constexpr Note F(Note::F_PITCH);
constexpr Note FSharp(Note::FSHARP_PITCH);
constexpr Note GFlat(Note::GFLAT_PITCH);
constexpr Note G(Note::G_PITCH);
constexpr Note GSharp(Note::GSHARP_PITCH);
constexpr Note AFlat(Note::AFLAT_PITCH);
constexpr Note A(Note::A_PITCH);
constexpr Note ASharp(Note::ASHARP_PITCH);
constexpr Note BFlat(Note::BFLAT_PITCH);
constexpr Note B(Note::B_PITCH);

#endif //VANEPS_NOTES_H
