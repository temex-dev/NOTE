#include <cstdlib>

inline const char *C_HL_keywords[] = {
    "switch", "if", "while", "for", "break", "continue", "return", "else", "struct",
    "union", "typedef", "static", "enum", "class", "case", "int|", "long|",
    "double|", "float|", "char|", "unsigned|", "signed|", "void|", NULL
};

inline const char *SQL_HL_keywords[] = {
    "ADD", "ADD CONSTRAINT", "ALL", "ALTER", "ALTER COLUMN", "ALTER TABLE",
    "ALTER VIEW", "AND", "ANY", "AS", "ASC", "BACKUP DATABASE", "BETWEEN",
    "CASE", "CHECK", "COLUMN", "CONSTRAINT", "CREATE", "CREATE DATABASE",
    "CREATE INDEX", "CREATE OR REPLACE VIEW", "CREATE TABLE",
    "CREATE PROCEDURE", "CREATE UNIQUE INDEX", "CREATE VIEW", "DATABASE",
    "DEFAULT", "DELETE", "DESC", "DISTINCT", "DROP", "DROP COLUMN",
    "DROP CONSTRAINT", "DROP DATABASE", "DROP DEFAULT", "DROP INDEX",
    "DROP TABLE", "DROP VIEW", "EXEC", "EXISTS", "FOREIGN KEY", "FROM",
    "FULL OUTER JOIN", "GROUP BY", "HAVING", "IN", "INDEX", "INNER JOIN",
    "INSERT INTO", "INSERT INTO SELECT", "IS NULL", "IS NOT NULL", "JOIN",
    "LEFT JOIN", "LIKE", "LIMIT", "NOT", "NOT NULL", "OR", "ORDER BY",
    "OUTER JOIN", "PRIMARY KEY", "PROCEDURE", "RIGHT JOIN", "ROWNUM",
    "SELECT", "SELECT DISTINCT", "SELECT INTO", "SELECT TOP", "SET", "TABLE",
    "TOP", "TRUNCATE TABLE", "UNION", "UNION ALL", "UNIQUE", "UPDATE",
    "VALUES", "VIEW", "WHERE", NULL
};

inline const char *HTML_HL_keywords[] = {
    "!DOCTYPE", "a", "abbr", "acronym", "address", "applet", "area", "article", "aside",
    "audio", "b", "base", "basefont", "bdi", "bdo", "big", "blockquote",
    "body", "br", "button", "canvas", "caption", "center", "cite", "code",
    "col", "colgroup", "data", "datalist", "dd", "del", "details", "dfn",
    "dialog", "dir", "div", "dl", "dt", "em", "embed", "fieldset",
    "figcaption", "figure", "font", "footer", "form", "frame", "frameset",
    "h1", "h2", "h3", "h4", "h5", "h6", "head", "header", "hgroup", "hr",
    "html", "i", "iframe", "img", "input", "ins", "kbd", "label", "legend",
    "li", "link", "main", "map", "mark", "menu", "meta", "meter", "nav",
    "noframes", "noscript", "object", "ol", "optgroup", "option", "output",
    "p", "param", "picture", "pre", "progress", "q", "rp", "rt", "ruby", "s",
    "samp", "script", "search", "section", "select", "small", "source", "span",
    "strike", "strong", "style", "sub", "summary", "sup", "svg", "table",
    "tbody", "td", "template", "textarea", "tfoot", "th", "thead", "time",
    "title", "tr", "track", "tt", "u", "ul", "var", "video", "wbr",
    "href|", "src|", "alt|", "class|", "id|", "style|", "title|", "type|",
    "name|", "value|", "rel|", "charset|", "content|", "placeholder|", "for|",
    "action|", "method|", "width|", "height|", "target|", NULL
};

inline const char *JS_HL_keywords[] = {
    "abstract", "arguments", "async", "await", "boolean", "break", "byte",
    "case", "catch", "char", "class", "const", "continue", "debugger",
    "default", "delete", "do", "double", "else", "enum", "eval", "export",
    "extends", "false", "final", "finally", "float", "for", "function", "goto",
    "if", "implements", "import", "in", "instanceof", "int", "interface",
    "let", "long", "native", "new", "null", "package", "private", "protected",
    "public", "return", "short", "static", "super", "switch", "synchronized",
    "this", "throw", "throws", "transient", "true", "try", "typeof", "using",
    "var", "void", "volatile", "while", "with", "yield",

    // Contextual keywords (ES modules, classes, iteration, new.target, import.meta)
    "as", "from", "get", "meta", "of", "set", "target",

    // Built-in objects, properties, and methods
    "Array", "Date", "hasOwnProperty", "Infinity", "isFinite", "isNaN",
    "isPrototypeOf", "length", "Math", "NaN", "name", "Number", "Object",
    "prototype", "String", "toString", "undefined", "valueOf",

    // Other common built-ins and globals
    "BigInt", "Boolean", "console", "Error", "globalThis", "JSON", "Map",
    "Promise", "Proxy", "Reflect", "RegExp", "Set", "Symbol", "WeakMap",
    "WeakSet",

    // Node.js / CommonJS (.cjs, and .js without "type": "module")
    "__dirname", "__filename", "Buffer", "clearImmediate", "exports", "global",
    "module", "process", "queueMicrotask", "require", "setImmediate",

    // Java objects and properties
    "getClass", "java", "JavaArray", "javaClass", "JavaObject", "JavaPackage",

    // HTML and Window objects and properties
    "alert", "all", "anchor", "anchors", "area", "assign", "blur", "button",
    "checkbox", "clearInterval", "clearTimeout", "clientInformation", "close",
    "closed", "confirm", "constructor", "crypto", "decodeURI",
    "decodeURIComponent", "defaultStatus", "document", "element", "elements",
    "embed", "embeds", "encodeURI", "encodeURIComponent", "escape", "event",
    "fileUpload", "focus", "form", "forms", "frame", "frameRate", "frames",
    "hidden", "history", "image", "images", "innerHeight", "innerWidth",
    "layer", "layers", "link", "location", "mimeTypes", "navigate",
    "navigator", "offscreenBuffering", "open", "opener", "option",
    "outerHeight", "outerWidth", "packages", "pageXOffset", "pageYOffset",
    "parent", "parseFloat", "parseInt", "password", "pkcs11", "plugin",
    "prompt", "propertyIsEnum", "radio", "reset", "screenX", "screenY",
    "scroll", "secure", "select", "self", "setInterval", "setTimeout",
    "status", "submit", "taint", "text", "textarea", "top", "unescape",
    "untaint", "window",

    // HTML event handlers
    "onblur", "onclick", "onerror", "onfocus", "onkeydown", "onkeypress",
    "onkeyup", "onmouseover", "onload", "onmouseup", "onmousedown", "onsubmit", NULL
};

inline const char *CSS_HL_keywords[] = {
    "accent-color", "align-content", "align-items", "align-self", "all",
    "animation", "animation-delay", "animation-direction",
    "animation-duration", "animation-fill-mode", "animation-iteration-count",
    "animation-name", "animation-play-state", "animation-timing-function",
    "aspect-ratio", "backdrop-filter", "backface-visibility", "background",
    "background-attachment", "background-blend-mode", "background-clip",
    "background-color", "background-image", "background-origin",
    "background-position", "background-position-x", "background-position-y",
    "background-repeat", "background-size", "block-size", "border",
    "border-block", "border-block-color", "border-block-end",
    "border-block-end-color", "border-block-end-style",
    "border-block-end-width", "border-block-start", "border-block-start-color",
    "border-block-start-style", "border-block-start-width",
    "border-block-style", "border-block-width", "border-bottom",
    "border-bottom-color", "border-bottom-left-radius",
    "border-bottom-right-radius", "border-bottom-style", "border-bottom-width",
    "border-collapse", "border-color", "border-end-end-radius",
    "border-end-start-radius", "border-image", "border-image-outset",
    "border-image-repeat", "border-image-slice", "border-image-source",
    "border-image-width", "border-inline", "border-inline-color",
    "border-inline-end", "border-inline-end-color", "border-inline-end-style",
    "border-inline-end-width", "border-inline-start",
    "border-inline-start-color", "border-inline-start-style",
    "border-inline-start-width", "border-inline-style", "border-inline-width",
    "border-left", "border-left-color", "border-left-style",
    "border-left-width", "border-radius", "border-right", "border-right-color",
    "border-right-style", "border-right-width", "border-spacing",
    "border-start-end-radius", "border-start-start-radius", "border-style",
    "border-top", "border-top-color", "border-top-left-radius",
    "border-top-right-radius", "border-top-style", "border-top-width",
    "border-width", "bottom", "box-decoration-break", "box-reflect",
    "box-shadow", "box-sizing", "break-after", "break-before", "break-inside",
    "caption-side", "caret-color", "clear", "clip", "clip-path", "color",
    "color-scheme", "column-count", "column-fill", "column-gap", "column-rule",
    "column-rule-color", "column-rule-style", "column-rule-width",
    "column-span", "column-width", "columns", "content", "counter-increment",
    "counter-reset", "counter-set", "cursor", "direction", "display",
    "empty-cells", "filter", "flex", "flex-basis", "flex-direction",
    "flex-flow", "flex-grow", "flex-shrink", "flex-wrap", "float", "font",
    "font-family", "font-feature-settings", "font-kerning",
    "font-language-override", "font-size", "font-size-adjust", "font-stretch",
    "font-style", "font-synthesis", "font-variant", "font-variant-alternates",
    "font-variant-caps", "font-variant-east-asian", "font-variant-ligatures",
    "font-variant-numeric", "font-variant-position", "font-weight", "gap",
    "grid", "grid-area", "grid-auto-columns", "grid-auto-flow",
    "grid-auto-rows", "grid-column", "grid-column-end", "grid-column-start",
    "grid-row", "grid-row-end", "grid-row-start", "grid-template",
    "grid-template-areas", "grid-template-columns", "grid-template-rows",
    "hanging-punctuation", "height", "hyphens", "hyphenate-character",
    "image-rendering", "initial-letter", "inline-size", "inset", "inset-block",
    "inset-block-end", "inset-block-start", "inset-inline", "inset-inline-end",
    "inset-inline-start", "isolation", "justify-content", "justify-items",
    "justify-self", "left", "letter-spacing", "line-break", "line-height",
    "list-style", "list-style-image", "list-style-position", "list-style-type",
    "margin", "margin-block", "margin-block-end", "margin-block-start",
    "margin-bottom", "margin-inline", "margin-inline-end",
    "margin-inline-start", "margin-left", "margin-right", "margin-top",
    "marker", "marker-end", "marker-mid", "marker-start", "mask", "mask-clip",
    "mask-composite", "mask-image", "mask-mode", "mask-origin",
    "mask-position", "mask-repeat", "mask-size", "mask-type", "max-block-size",
    "max-height", "max-inline-size", "max-width", "min-block-size",
    "min-inline-size", "min-height", "min-width", "mix-blend-mode",
    "object-fit", "object-position", "offset", "offset-anchor",
    "offset-distance", "offset-path", "offset-position", "offset-rotate",
    "opacity", "order", "orphans", "outline", "outline-color", "outline-offset",
    "outline-style", "outline-width", "overflow", "overflow-anchor",
    "overflow-wrap", "overflow-x", "overflow-y", "overscroll-behavior",
    "overscroll-behavior-block", "overscroll-behavior-inline",
    "overscroll-behavior-x", "overscroll-behavior-y", "padding",
    "padding-block", "padding-block-end", "padding-block-start",
    "padding-bottom", "padding-inline", "padding-inline-end",
    "padding-inline-start", "padding-left", "padding-right", "padding-top",
    "page-break-after", "page-break-before", "page-break-inside",
    "paint-order", "perspective", "perspective-origin", "place-content",
    "place-items", "place-self", "pointer-events", "position", "quotes",
    "resize", "right", "rotate", "row-gap", "scale", "scroll-behavior",
    "scroll-margin", "scroll-margin-block", "scroll-margin-block-end",
    "scroll-margin-block-start", "scroll-margin-bottom",
    "scroll-margin-inline", "scroll-margin-inline-end",
    "scroll-margin-inline-start", "scroll-margin-left", "scroll-margin-right",
    "scroll-margin-top", "scroll-padding", "scroll-padding-block",
    "scroll-padding-block-end", "scroll-padding-block-start",
    "scroll-padding-bottom", "scroll-padding-inline",
    "scroll-padding-inline-end", "scroll-padding-inline-start",
    "scroll-padding-left", "scroll-padding-right", "scroll-padding-top",
    "scroll-snap-align", "scroll-snap-stop", "scroll-snap-type",
    "scrollbar-color", "shape-outside", "tab-size", "table-layout",
    "text-align", "text-align-last", "text-decoration",
    "text-decoration-color", "text-decoration-line", "text-decoration-style",
    "text-decoration-thickness", "text-emphasis", "text-emphasis-color",
    "text-emphasis-position", "text-emphasis-style", "text-indent",
    "text-justify", "text-orientation", "text-overflow", "text-shadow",
    "text-transform", "text-underline-offset", "text-underline-position",
    "top", "transform", "transform-origin", "transform-style", "transition",
    "transition-delay", "transition-duration", "transition-property",
    "transition-timing-function", "translate", "unicode-bidi", "user-select",
    "vertical-align", "visibility", "white-space", "widows", "width",
    "word-break", "word-spacing", "word-wrap", "writing-mode", "z-index",
    "zoom",

    // ----- At-rules -----
    "@charset", "@container", "@counter-style", "@font-face",
    "@font-palette-values", "@import", "@keyframes", "@layer", "@media",
    "@namespace", "@page", "@property", "@scope", "@starting-style",
    "@supports",

    // ----- Pseudo-classes -----
    ":active", ":any-link", ":autofill", ":checked", ":default", ":defined",
    ":dir", ":disabled", ":empty", ":enabled", ":first", ":first-child",
    ":first-of-type", ":focus", ":focus-visible", ":focus-within",
    ":fullscreen", ":has", ":hover", ":in-range", ":indeterminate",
    ":invalid", ":is", ":lang", ":last-child", ":last-of-type", ":left",
    ":link", ":modal", ":not", ":nth-child", ":nth-last-child",
    ":nth-last-of-type", ":nth-of-type", ":only-child", ":only-of-type",
    ":optional", ":out-of-range", ":placeholder-shown", ":popover-open",
    ":read-only", ":read-write", ":required", ":right", ":root", ":scope",
    ":state", ":target", ":user-invalid", ":user-valid", ":valid", ":visited",
    ":where",

    // ----- Pseudo-elements -----
    "::after", "::backdrop", "::before", "::file-selector-button",
    "::first-letter", "::first-line", "::grammar-error", "::highlight",
    "::marker", "::placeholder", "::selection", "::spelling-error",
    "::view-transition", "::view-transition-group",
    "::view-transition-image-pair", "::view-transition-new",
    "::view-transition-old",

    // ----- Functions (names only; color/inset/opacity/perspective/rotate/
    //       scale/translate are already listed above as properties) -----
    "acos", "asin", "atan", "atan2", "attr", "blur", "brightness", "calc",
    "circle", "clamp", "color-mix", "conic-gradient", "contrast", "cos",
    "counter", "counters", "cubic-bezier", "drop-shadow", "ellipse", "exp",
    "fit-content", "grayscale", "hsl", "hsla", "hue-rotate", "hwb", "hypot",
    "invert", "lab", "lch", "light-dark", "linear-gradient", "log", "matrix",
    "matrix3d", "max", "min", "minmax", "mod", "oklab", "oklch", "polygon",
    "pow", "radial-gradient", "ray", "repeat",
    "repeating-conic-gradient", "repeating-linear-gradient",
    "repeating-radial-gradient", "rgb", "rgba", "rotate3d", "rotateX",
    "rotateY", "rotateZ", "round", "saturate", "scale3d", "scaleX", "scaleY",
    "sepia", "sin", "skew", "skewX", "skewY", "sqrt", "steps",
    "translateX", "translateY", "translateZ", "url", "var", "xywh",

    // ----- Common value keywords -----
    "none", "auto", "inherit", "initial", "unset", "revert", "revert-layer",
    "normal", "bold", "bolder", "lighter", "italic", "oblique", "underline",
    "overline", "line-through", "solid", "dashed", "dotted", "double",
    "groove", "ridge", "outset", "hidden", "visible", "scroll", "ellipsis",
    "block", "inline", "inline-block", "inline-flex", "inline-grid",
    "contents", "table", "table-row", "table-cell", "list-item", "flow-root",
    "absolute", "relative", "fixed", "static", "sticky", "center", "start",
    "end", "flex-start", "flex-end", "space-between", "space-around",
    "space-evenly", "stretch", "baseline", "nowrap", "wrap", "wrap-reverse",
    "row", "row-reverse", "column", "column-reverse", "no-repeat", "repeat-x",
    "repeat-y", "space", "cover", "contain", "transparent", "currentcolor",
    "pointer", "default", "move", "text", "wait", "help", "not-allowed",
    "grab", "grabbing", "crosshair", "zoom-in", "zoom-out", "uppercase",
    "lowercase", "capitalize", "justify", "break-word", "break-all", "pre",
    "pre-wrap", "pre-line", "border-box", "content-box", "padding-box",
    "ease", "ease-in", "ease-out", "ease-in-out", "linear", "step-start",
    "step-end", "infinite", "alternate", "alternate-reverse", "forwards",
    "backwards", "both", "running", "paused", "thin", "medium", "thick",
    "xx-small", "x-small", "small", "large", "x-large", "xx-large",
    "xxx-large", "smaller", "larger", "serif", "sans-serif", "monospace",
    "cursive", "fantasy", "system-ui", "ltr", "rtl", "horizontal-tb",
    "vertical-rl", "vertical-lr", "min-content", "max-content", "auto-fill",
    "auto-fit", "subgrid", "dark", "light", "screen", "print", "and", "or",
    "only", "from", "to", "!important",

    // ===== Named colors =====
    "aliceblue", "antiquewhite", "aqua", "aquamarine", "azure", "beige",
    "bisque", "black", "blanchedalmond", "blue", "blueviolet", "brown",
    "burlywood", "cadetblue", "chartreuse", "chocolate", "coral",
    "cornflowerblue", "cornsilk", "crimson", "cyan", "darkblue", "darkcyan",
    "darkgoldenrod", "darkgray", "darkgreen", "darkgrey", "darkkhaki",
    "darkmagenta", "darkolivegreen", "darkorange", "darkorchid", "darkred",
    "darksalmon", "darkseagreen", "darkslateblue", "darkslategray",
    "darkslategrey", "darkturquoise", "darkviolet", "deeppink", "deepskyblue",
    "dimgray", "dimgrey", "dodgerblue", "firebrick", "floralwhite",
    "forestgreen", "fuchsia", "gainsboro", "ghostwhite", "gold", "goldenrod",
    "gray", "green", "greenyellow", "grey", "honeydew", "hotpink", "indianred",
    "indigo", "ivory", "khaki", "lavender", "lavenderblush", "lawngreen",
    "lemonchiffon", "lightblue", "lightcoral", "lightcyan",
    "lightgoldenrodyellow", "lightgray", "lightgreen", "lightgrey",
    "lightpink", "lightsalmon", "lightseagreen", "lightskyblue",
    "lightslategray", "lightslategrey", "lightsteelblue", "lightyellow",
    "lime", "limegreen", "linen", "magenta", "maroon", "mediumaquamarine",
    "mediumblue", "mediumorchid", "mediumpurple", "mediumseagreen",
    "mediumslateblue", "mediumspringgreen", "mediumturquoise",
    "mediumvioletred", "midnightblue", "mintcream", "mistyrose", "moccasin",
    "navajowhite", "navy", "oldlace", "olive", "olivedrab", "orange",
    "orangered", "orchid", "palegoldenrod", "palegreen", "paleturquoise",
    "palevioletred", "papayawhip", "peachpuff", "peru", "pink", "plum",
    "powderblue", "purple", "rebeccapurple", "red", "rosybrown", "royalblue",
    "saddlebrown", "salmon", "sandybrown", "seagreen", "seashell", "sienna",
    "silver", "skyblue", "slateblue", "slategray", "slategrey", "snow",
    "springgreen", "steelblue", "tan", "teal", "thistle", "tomato",
    "turquoise", "violet", "wheat", "white", "whitesmoke", "yellow",
    "yellowgreen",

    // ===== Units (only after a number) =====
    "px", "em", "rem", "ex", "ch", "lh", "rlh", "vw", "vh", "vmin", "vmax",
    "vi", "vb", "svw", "svh", "lvw", "lvh", "dvw", "dvh", "cqw", "cqh", "cqi",
    "cqb", "cqmin", "cqmax", "cm", "mm", "Q", "pt", "pc", "fr", "%",
    "deg", "grad", "rad", "turn", "s", "ms", "Hz", "kHz", "dpi", "dpcm",
    "dppx", "x",

    // ===== SCSS additions =====
    // ----- Directives -----
    "@use", "@forward", "@mixin", "@include", "@function", "@return",
    "@extend", "@at-root", "@if", "@else", "@each", "@for", "@while",
    "@debug", "@warn", "@error", "@content",

    // ----- Directive keywords and flags -----
    "if", "else", "each", "for", "while", "in", "through", "as", "with",
    "show", "hide", "using", "true", "false", "null",
    "!default", "!global", "!optional",

    // ----- Built-in modules -----
    "sass:math", "sass:string", "sass:color", "sass:list", "sass:map",
    "sass:selector", "sass:meta",

    // ----- Global built-in functions -----
    "lighten", "darken", "desaturate", "adjust-hue", "mix", "complement",
    "opacify", "transparentize", "fade-in", "fade-out", "alpha", "hue",
    "saturation", "lightness", "adjust-color", "scale-color", "change-color",
    "ie-hex-str", "percentage", "ceil", "floor", "abs", "random", "unit",
    "unitless", "comparable", "length", "nth", "set-nth", "join", "append",
    "zip", "index", "list-separator", "is-bracketed", "map-get", "map-merge",
    "map-remove", "map-keys", "map-values", "map-has-key", "selector-nest",
    "selector-append", "selector-extend", "selector-replace",
    "selector-unify", "is-superselector", "simple-selectors",
    "selector-parse", "str-length", "str-insert", "str-index", "str-slice",
    "to-upper-case", "to-lower-case", "unquote", "quote", "unique-id",
    "type-of", "inspect", "variable-exists", "global-variable-exists",
    "function-exists", "mixin-exists", "content-exists", "get-function",
    "call", "feature-exists", NULL
};

inline const char *PY_HL_keywords[] = {
    // ===== Keywords (the 35 on the GeeksforGeeks page / keyword.kwlist) =====
    "False", "None", "True", "and", "as", "assert", "async", "await", "break",
    "class", "continue", "def", "del", "elif", "else", "except", "finally",
    "for", "from", "global", "if", "import", "in", "is", "lambda", "nonlocal",
    "not", "or", "pass", "raise", "return", "try", "while", "with", "yield",

    // ===== Soft keywords (only keywords in some positions) =====
    "match", "case", "type",

    // ===== Built-in constants =====
    "Ellipsis", "NotImplemented", "__debug__",

    // ===== Conventional names =====
    "self", "cls",

    // ===== Common dunder names =====
    "__init__", "__name__", "__main__", "__file__", "__doc__", "__import__",

    // ===== Built-in functions and types =====
    "abs", "aiter", "all", "anext", "any", "ascii", "bin", "bool",
    "breakpoint", "bytearray", "bytes", "callable", "chr", "classmethod",
    "compile", "complex", "delattr", "dict", "dir", "divmod", "enumerate",
    "eval", "exec", "filter", "float", "format", "frozenset", "getattr",
    "globals", "hasattr", "hash", "help", "hex", "id", "input", "int",
    "isinstance", "issubclass", "iter", "len", "list", "locals", "map", "max",
    "memoryview", "min", "next", "object", "oct", "open", "ord", "pow",
    "print", "property", "range", "repr", "reversed", "round", "set",
    "setattr", "slice", "sorted", "staticmethod", "str", "sum", "super",
    "tuple", "vars", "zip", NULL
};
